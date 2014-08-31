// img2hpp - Convert image to header with a colormap in 16 bit RRRRRGGGGGGBBBBB
// Command: ./img2hpp.py -m -i target.png -n target
#ifndef TARGET_HPP
#define TARGET_HPP
typedef struct target_struct target_type;
struct target_struct
{
	uint16_t Width;
	uint16_t Height;
	uint8_t Data[128];
};
static const target_type target_data
{
	32,
	32,
	{
		0, 255, 255, 0, 0, 127, 254, 0, 0, 63, 252, 0, 0, 31, 248, 0, 
		0, 15, 240, 0, 0, 7, 224, 0, 0, 3, 192, 0, 0, 1, 128, 0, 128, 
		0, 0, 1, 192, 0, 0, 3, 224, 0, 0, 7, 240, 0, 0, 15, 248, 3, 
		192, 31, 252, 7, 224, 63, 254, 15, 240, 127, 255, 15, 240, 255, 
		255, 15, 240, 255, 254, 15, 240, 127, 252, 7, 224, 63, 248, 
		3, 192, 31, 240, 0, 0, 15, 224, 0, 0, 7, 192, 0, 0, 3, 128, 
		0, 0, 1, 0, 1, 128, 0, 0, 3, 192, 0, 0, 7, 224, 0, 0, 15, 240, 
		0, 0, 31, 248, 0, 0, 63, 252, 0, 0, 127, 254, 0, 0, 255, 255, 
		0, 
}
};
Mask target
{
	.Width = &target_data.Width,
	.Height = &target_data.Height,
	.Data = &target_data.Data[0]
};
#endif
