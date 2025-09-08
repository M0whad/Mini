<h1>- strcmp vs strcasecmp</h1>
La fonction strcmp compare deux chaînes de caractères en tenant compte des différences entre les lettres majuscules et minuscules, ce qui signifie qu'elle les considère comme distinctes.
En revanche, la fonction strcasecmp ignore cette différence et traite les majuscules et les minuscules comme étant identiques. De plus, il est important de noter que strcmp renvoie un nombre
négatif si la première chaîne est inférieure à la seconde, un nombre positif si elle est supérieure,et 0 si les deux chaînes sont identiques. Par exemple, "Bonjour" et "bonjour" ne sont pas
considérées comme égales, tandis que "Bonjour" et "Bonjour" le sont.
<h1>Search algorithm</h1>
<h2>Search linaire<h2>
 Ou bien le Recherche linéaire {
Ce type d'algorithme est utilisé pour parcourir des tableaux, similaire à la recherche binaire.
L'idée est simple : nous utilisons une boucle pour examiner chaque élément du tableau et vérifier s'il répond à la condition spécifiée.
<h2>Binaire search</h2>
La recherche binaire (la recherche dichotomique) consiste à diviser le tableau en deux et à lui donner la condition ou le caractère que nous souhaitons trouver.
  Ensuite, elle compare les côtés du tableau pour réduire les options, ce qui est vraiment intéressant. Il est également important de noter qu'il y a
  une condition : le tableau doit être trié, soit de manière croissante, soit de manière décroissante.
  <b><u>Exemple:</u></b>
  int algo("int x, t[], v")
  int inf = 0;
  int sup = n - 1 //Ici on va prendre le n du sizeof(t[])-sizeof(t[0]));
  mid = inf + (sup - inf)/2
  while (T[midd] == target);
  return = -1;
  else if T[midd] < target 
  inf = mid + 1;
  else 
  sup= mid - 1;

  return -1;
  
