invalid_message
~~~~~~~~~~~~~~~

**type**: ``string`` **default**: ``This value is not valid``

C'est le message d'erreur de validation qui est utilis� si la donn�e saisie
dans ce champ n'a pas de sens (c'est-�-dire que la validation �choue).

Cela arrive, par exemple, quand l'utilisateur saisit une chaine de caract�res sans
aucun sen dans un champ :doc:`time</reference/forms/types/time>` et que cette chaine
ne peut �tre convertie en temps, ou alors si l'utilisateur saisit une chaine
(ex ``pomme``) dans un champ qui attend un nombre.

La validation (par exemple d�finir une longueur minimum pour un champ) classique
(logique m�tier) devrait contenir un message de validation avec vos r�gles de
validation (:ref:`R�f�rence<book-validation-constraint-configuration>`).
