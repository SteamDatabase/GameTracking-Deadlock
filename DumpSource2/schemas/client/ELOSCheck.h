enum ELOSCheck : uint32_t
{
	ELOSCheck_None = 0,
	ELOSCheck_Head = 1,
	ELOSCheck_Head_IgnoreObscureBlockers = 2,
	ELOSCheck_BodyCenter = 3,
	ELOSCheck_BodyCenter_IgnoreObscureBlockers = 4,
	ELOSCheck_Bounds = 5,
	ELOSCheck_Bounds_IgnoreObscureBlockers = 6,
	ELOSCheck_FibonacciSphere = 7,
};
