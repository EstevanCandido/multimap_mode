# multimap_mode

Armazenar várias chaves ou outros tipos iguais com seus respectivos valores, pode usar um multimap. O multimap é uma classe de contêiner semelhante ao map, mas permite chaves duplicadas.
Para usar um multimap, você precisa incluir a biblioteca <map>. A sintaxe para definir um multimap é semelhante à do map, exceto que você usa a palavra-chave multimap em vez de map.

Função que calcule a moda das chaves inteiras de um multimap com valores do tipo double que sejam menores que 2.0 entre si.


Neste exemplo, a função moda_chaves_inteiras recebe um multimap m que tem chaves do tipo int e valores do tipo double. 
A função itera sobre os pares chave-valor do multimap e adiciona as chaves que correspondem aos valores menores que 2.0 a um vetor de chaves. 
Em seguida, a função classifica o vetor de chaves em ordem crescente.

Depois de classificar as chaves, a função percorre o vetor para determinar a moda das chaves. A moda é a chave que ocorre com mais frequência no vetor. 
A função mantém duas variáveis, moda e moda_count, para armazenar a chave que ocorre com mais frequência e o número de ocorrências dessa chave. 
A função também mantém duas variáveis, atual e atual_count, para acompanhar a chave atual e o número de ocorrências dessa chave à medida que percorre o vetor.

Ao percorrer o vetor, se a chave atual for igual à chave anterior, a função incrementa atual_count. Se a chave atual for diferente da chave anterior, 
a função compara atual_count com moda_count e atualiza moda e moda_count se atual_count for maior. Em seguida, a função atualiza atual e atual_count para continuar a percorrer o vetor.

Depois de percorrer todo o vetor, a função compara atual_count com moda_count mais uma vez e atualiza moda se atual_count for maior.
