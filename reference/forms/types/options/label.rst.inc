label
~~~~~

**type**: ``string`` **default**: Le libell� est � devin� � � partir du nom du champ.

D�finit le libell� qui sera utilis� � l'affichage du champ. Le libell� peut aussi
�tre directement d�fini dans le template :
    
.. code-block:: jinja

    {{ form_label(form.name, 'Votre nom') }}