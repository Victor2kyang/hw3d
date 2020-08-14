struct v2f
{
	float3 color : Color;
	float4 pos : SV_Position;
};

v2f main(float2 pos : Position,float3 color:Color)
{
	v2f v;
	v.pos = float4(pos.x, pos.y, 0.0f, 1.0f);
	v.color = color;
	return v;
}