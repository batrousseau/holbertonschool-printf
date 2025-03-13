# holbertonschool-printf
He tries to code the printf function, you never believe what happens ! 
## DESCRIPTION
La fonction `_printf` produit une sortie formatée selon une chaîne de caractères `format`. Elle écrit la sortie sur `stdout` et retourne le nombre de caractères affichés (hors caractère null de fin).

## INSTRUCTION DE COMPILATION 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

### **Spécificateurs de format**
La chaîne `format` détermine comment les arguments suivants sont interprétés et affichés. Les spécificateurs pris en charge sont :

- **`%c`** : Affiche un caractère unique.
- **`%s`** : Affiche une chaîne de caractères.
- **`%d` / `%i`** : Affiche un entier signé en notation décimale.
- **`%%`** : Affiche un pourcentage (`%`) littéral.

La fonction parcourt chaque caractère de la chaîne `format` :
- **Les caractères normaux** sont imprimés tels quels.
- **Lorsqu'un `%` est rencontré**, `_printf` cherche un spécificateur valide et applique le traitement correspondant.
- **Si un spécificateur inconnu est trouvé**, `_printf` affiche `%` sans conversion.

## VALEUR DE RETOUR
Retourne le nombre total de caractères affichés (hors caractère null).  
En cas d’échec, la fonction **termine le programme avec un état `-1`**.

## EXEMPLES
```c
_printf("Bonjour, %s !\n", "monde");
// Affiche : Bonjour, monde !

_printf("Nombre : %d\n", 42);
// Affiche : Nombre : 42

_printf("Caractère : %c\n", 'A');
// Affiche : Caractère : A

_printf("Signe pourcentage : %%\n");
// Affiche : Signe pourcentage : %
```


## FLOWCHART

           +----------------+
           |     Début       |
           +----------------+
                    |
                    v
           +----------------+
           | format == NULL? |
           +----------------+
              |        |
              | Oui    | Non
              v        v
    +----------------+   +------------------------+
    | Quitter avec -1|   | Initialisation des     |
    | (-1 exit)      |   | variables & va_start() |
    +----------------+   +------------------------+
                                  |
                                  v
                      +----------------------+
                      | Parcourir format[i]  |
                      +----------------------+
                                  |
                                  v
                     +-------------------------+
                     | format[i] == '%' ?      |
                     +-------------------------+
                         |            |
                         | Non        | Oui
                         v            v
             +------------------+  +----------------------+
             | Afficher caractère |  | Chercher spécificateur |
             | normal & p_lenght++|  | après '%'             |
             +------------------+  +----------------------+
                         |            |
                         v            v
               +------------------+  +------------------------+
               | i++               |  | Spécificateur trouvé ? |
               +------------------+  +------------------------+
                         |            | 
                         | Non        | Oui
                         v            v
               +------------------+  +-------------------------+
               | Retourner '%'     |  | Exécuter la fonction   |
               | p_lenght++        |  | correspondante         |
               +------------------+  +-------------------------+
                         |            |
                         v            v
               +------------------+  +------------------+
               | i++               |  | i++               |
               +------------------+  +------------------+
                         |            |
                         +------------+
                         |
                         v
               +------------------------+
               | Fin de format[i] ?      |
               +------------------------+
                         |
                         | Non
                         v
                 Retourner en boucle
                         |
                         v
                      +------+
                      | Fin  |
                      +------+