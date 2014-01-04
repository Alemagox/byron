byron
=====
TODO: 

NOTAS: Se han implementado listas recursivas por la izquierda siempre que se ha podido y no han creado conflictos avance/reducción.

// CAMBIOS en la memorio

- Cambiar en la memoria el operador de contacatenación &. Página 13. No emplezamos concatenación de string, directamente empleados ++ como concatenación universal. Esto o cambiamos ++ a &.

- Quitar code_statement. Equivalen a quialified_expression y no tenemos expresiones cualificadas. Revisar manual de ADA para ver a lo que me refiero.

- Quitar function_pefix y procedure_prefix, dejarlo como program_name. Cambiar también varaible_name por name. Página 21. En página 14 quitar al regla variable_name. Sustituir todos los variable_name por name.

- Renombar name 

- Página 12. Condition no existe y en la especificación de ADA se dice que es un boolean_expression y ya. Revisar qeu cambios hacer a condition y expression para que todo cuadre. -> Solucion: condition se cambia por expression y expression se actualiza. Cambios en expression y primary ->

	expression ::= 
		relation {logical_operator}

	primary ::= 
		numeric_literal | null | string_literal |
		| name | (expression) | boolean_literal  // null equivale a false, TRUE es != 0 y FALSE es = 0


- numeric_literal no esta definido en la memoria. numeric literal es sustituido por integer_literal y float_literal

- program_name ha de sustituirse por IDENTIFIER

- select_statement no debería aparecer. Quitar de página 14

- selecting_expression en página 16 ha de actualizarse por identifier pues es una variable.

- Página 18, eliminar defining_designator. Faltan los ; en procedure_specification y function_

- Sustituir default_expression por expression.

- Página 6. Simplificar type_definition añadiendo directamente array y record type_definition. En type_declaration cambiar complex_type_definition por type_definition.

- Eliminar body de palabras reservadas

- Name se elimina, ahora solo existe variable u function_call pasa a ser una primary

- Explicit_actual_paremeter pasa a ser igual a expression. Se cambian las reglas de explicit actual_parameter a expression.

- Cambiamos el componente indezado para que se haga con corchetes. Generaba conflictos con las llamadas a funciones.

