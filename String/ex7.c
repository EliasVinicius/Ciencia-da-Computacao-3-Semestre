int main() {
	char str1[12]; /*reserva espaço para 12 caracteres*/
	char str2[12]; /*reserva espaço para 12 caracteres*/

	/* carrego o primeiro string */
	strcpy(str1,"oba oba");

	/* carrego o segundo string */
	strcpy(str2,"oba oba");

	if (!strcmp(str1,str2)) printf("iguais\n");
	else printf("diferentes\n");

	/* mudo o valor de str2 */
	strcpy(str2,"oba ");

	if (!strcmp(str1,str2)) printf("iguais\n");
	else printf("diferentes\n");

	/* vejo qual é maior (alfabeticamente) */
	if (strcmp(str1,str2)>0) printf("\"%s\" maior que \"%s\"\n",str1,str2);

	/* mudo o valor de str2 */
	strcpy(str2,"oba obb");

	/* vejo qual é menor (alfabeticamente) */
	if (strcmp(str1,str2)<0) printf("\"%s\" menor que \"%s\"\n",str1,str2);
}
