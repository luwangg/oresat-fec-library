#include "fec.c"

int main(int argc, char *argv[])
{
	FILE *in = fopen(argv[1],"rb");
        FILE *out = fopen(argv[2],"wb");
	h74(in, out);
	fclose(in);
	fclose(out);
	in = fopen(argv[2],"rb");
        out = fopen(argv[3],"wb");
	scram(10,in,out);
	fclose(in);
	fclose(out);
	in = fopen(argv[3],"rb");
	out = fopen(argv[4],"wb");
	d_h74(in,out);
	fclose(in);
	fclose(out);
	return 0;
}
