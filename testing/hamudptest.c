#include "fec.c"

int main(int argc, char *argv[])
{
	FILE *in = fopen(argv[1],"rb");
        FILE *out = fopen(argv[2],"wb");
	h74(in,out);
	fclose(in);
	fclose(out);
	in = fopen(argv[2],"rb");
        out = fopen(argv[3],"wb");
	int pcount = inlvUDP(1000,in,out);
	fclose(in);
	fclose(out);
	in = fopen(argv[3],"rb");
        out = fopen(argv[4],"wb");
	scram(10,in,out);
	fclose(in);
	fclose(out);
	in = fopen(argv[4],"rb");
        out = fopen(argv[5],"wb");
	decUDP(pcount,1000,in,out);
	fclose(in);
	fclose(out);
	in = fopen(argv[5],"rb");
        out = fopen(argv[6],"wb");
	d_h74(in,out);
	fclose(in);
	fclose(out);
	return 0;
}
