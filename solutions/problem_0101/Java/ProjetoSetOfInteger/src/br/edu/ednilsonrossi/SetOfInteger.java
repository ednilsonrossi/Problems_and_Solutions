package br.edu.ednilsonrossi;

public class SetOfInteger {
	private final int DEFAULT_SIZE = 100;
	private int array[];
	
	public SetOfInteger() {
		init();
	}
	
	public SetOfInteger(int size) {
		if (size >= 0) {
			array = new int[size];
		} else {
			init();
		}
	}
	
	public boolean insert(int index, int value) {
		if (index >= 0 && index < array.length) {
			array[index] = value;
			return true;
		}
		return false;
	}
	
	public int get(int index) {
		if (index >= 0 && index < array.length) {
			return array[index];
		}
		return 0;
		/*
		 * A implementação correta deste metodo faria o lançamento 
		 * de uma exceção caso o index esteja fora das dimensões do
		 * array, contudo aqui adotou-se retornar o valor zero se
		 * isso ocorrer.
		 */
	}
	
	public SetOfInteger union(SetOfInteger setInteger) {
		/*
		 * Instanciar o novo objeto (unionSet) com o tamanho necessário para unir todos
		 * os dois SetOfInteger em um, ou seja, o tamanho do this.array somado com o 
		 * tamanho do setInteger.array.
		 */
		SetOfInteger unionSet = new SetOfInteger(this.array.length + setInteger.array.length);
		
		/*
		 * Como estamos na instancia this, os primeiros valores que estarão no novo objeto
		 * serão os do this.array.
		 */
		for (int i = 0; i < this.array.length; i++) {
			unionSet.array[i] = this.array[i];
		}
		
		/*
		 * Após os valores do this.array, são inseridos no novo objetos os valores do 
		 * setInteger.array.
		 */
		for (int i = 0; i < setInteger.array.length; i++) {
			unionSet.array[i + this.array.length] = setInteger.array[i];
		}
		
		return unionSet;
	}
	
	public SetOfInteger intersection(SetOfInteger setInteger) {
		/*
		 * Para inicializar o novo objeto de forma correta deve-se definir que seu 
		 * tamanho seja exatamente o tamanho da quantidade de dados que fazem parte da
		 * intersecção dos objetos this e setInteger. A ESTRATÉGIA utilizada aqui é definir 
		 * um array temporário com o maior tamanho dos arrays this e setInteger. Para isso, 
		 * definiu-se a variável max que recebe o maior tamanho dos SetOfInteger
		 * que estão sendo trabalhados. Nesse exemplo utiliza-se o método max() da 
		 * classe Integer.
		 */
		int max = Integer.max(this.array.length, setInteger.array.length);
		
		int temp[] = new int[max];
		
		/*
		 * ESTRATÉGIA PARA INTERSECÇÃO: Verificar no array do objeto this, os elementos 
		 * que estão também no objeto setInteger. Contudo, verifica-se ainda a existencia
		 * de valores repetidos, de forma que não são inseridas duplicatas no array temp.
		 */
		int index = 0;
		boolean exists;
		for (int i = 0; i < this.array.length; i++) {
			for (int j = 0; j < setInteger.array.length; j++) {
				if (this.array[i] == setInteger.array[j]) {
					
					/*
					 * Ao entrar nesse if() temos que existe um valor de intersecção entre this
					 * e setInteger. Dessa forma, deve-se verificar se o valor encontrado existe 
					 * ou não no array temp[]. Caso o valor não exista, insere-se o valor no
					 * array temp[], caso contrário ignora-se o valor e não o insere no temp[].
					 */
					exists = false;
					for (int k = 0; k < index && !exists; k++) {
						if (temp[k] == this.array[i]) {
							exists = true;
						}
					}
					if (!exists) {
						temp[index] = this.array[i];
						index += 1;
					}
					
				}
			}
		}
		
		/*
		 * O array temp[] contém os valores da interseção dos objetos this e setInteger.
		 * Com esse array é possível definir o tamanho do novo objeto e copiar os dados
		 * do array para dentro do objeto.
		 */
		SetOfInteger intersection = new SetOfInteger(index);
		for (int i = 0; i < index; i++) {
			intersection.array[i] = temp[i];
		}
		
		return intersection;
	}
	
	public SetOfInteger diference(SetOfInteger setInteger) {
		/*
		 * A ESTRATÉGIA para a diferença dos conjuntos será utilizar o método constains() 
		 * implementado como privado. Esse método verifica se um valor existe ou não no
		 * SetOfInteger. Assim, percorre-se ambos os objetos em busca de elementos que
		 * existem em um mas não no outro objeto. Ainda no array temporário faz-se a 
		 * busca de elementos repetidos, evitando que a diferença contenha replicas.
		 */
		int max = this.array.length + setInteger.array.length;
		int temp[] = new int[max];
		
		int index = 0;
		/*
		 * Verifica os elementos do objeto this.
		 */
		for (int i = 0; i < this.array.length; i++) {
			if (!setInteger.contains(this.array[i])) {
				
				boolean exist = false;
				int k = 0;
				while(!exist && k < index) {
					exist = temp[k] == this.array[i];
					k += 1;
				}
				if (!exist) {
					temp[index] = this.array[i];
					index += 1;
				}
			}
		}
		
		/*
		 * Verifica os elementos do objeto setInteger
		 */
		for (int i = 0; i < setInteger.array.length; i++) {
			if (!this.contains(setInteger.array[i])) {
				
				boolean exist = false;
				int k = 0;
				while(!exist && k < index) {
					exist = temp[k] == setInteger.array[i];
					k += 1;
				}
				if (!exist) {
					temp[index] = setInteger.array[i];
					index += 1;
				}
			}
		}
		
		/*
		 * Criar o novo objeto e copiar os dados da diferença
		 */
		SetOfInteger diference = new SetOfInteger(index);
		for(int i = 0; i < index; i++) {
			diference.array[i] = temp[i];
		}
		
		return diference;
	}
	
	public String toString() {
		String str;
		if (this.array.length == 0) {
			str = "[]";
		}else if (this.array.length == 1) {
			str = "[" + this.array[0] + "]";
		} else {
			str = "[" + this.array[0];
			for (int i = 1; i < this.array.length - 1; i++) {
				str += ", " + this.array[i];
			}
			str += ", " + this.array[this.array.length-1] + "]";
		}
		return str;
	}
	
	private void init() {
		array = new int[DEFAULT_SIZE];
	}
	
	private boolean contains(int element) {
		boolean exist = false;
		int i = 0;
		while (i < this.array.length && !exist) {
			exist = this.array[i] == element;
			i++;
		}
		return exist;
	}
}
