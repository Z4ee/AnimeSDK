#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"
#include "unitysdk/VertColFlipBookMode.h"

class FiveDimRenderingItem;

#define VERTCOLFLIPBOOKOPERATION_METHOD_3_2760FD3615174BA2_OFFSET UNITYSDK_OFFSET(0xE9A0EE0)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_419EC2C80BF73EA5_1_OFFSET UNITYSDK_OFFSET(0xE9A11A0)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_419EC2C80BF73EA5_OFFSET UNITYSDK_OFFSET(0xE9A1010)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_6454AD7212B2C6DE_OFFSET UNITYSDK_OFFSET(0xE9A1330)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_844E93377CD0D4F8_OFFSET UNITYSDK_OFFSET(0xE9A0AD0)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_A0C1C05C5CFB7EEC_OFFSET UNITYSDK_OFFSET(0xE9A0E50)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xE9A1630)
#define VERTCOLFLIPBOOKOPERATION__CCTOR_OFFSET UNITYSDK_OFFSET(0xE9A1690)
#define VERTCOLFLIPBOOKOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0xE9A1680)

inline static constexpr unsigned int VertColFlipBookOperation_TypeDefinitionIndex = 47576;

class VertColFlipBookOperation : public ::FDRIMatStateOperation
{
public:
	static ::System::Int32* StaticGet__FlipBookUseCustomData()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VertColFlipBookOperation_TypeDefinitionIndex)->GetStaticField(0x11D60);
	}
	::VertColFlipBookMode Mode; // 0x20
	::System::Int32 FrameID0; // 0x24
	::System::Int32 FrameID1; // 0x28
	::System::Int32 FrameID2; // 0x2C
	::System::Int32 FrameID3; // 0x30
	::System::Int32 FrameID4; // 0x34
	::System::Int32 FrameID5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION__CCTOR_OFFSET))();
	}

	::System::Void Method_3_844E93377CD0D4F8(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_844E93377CD0D4F8_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A0C1C05C5CFB7EEC(::FiveDimRenderingItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_A0C1C05C5CFB7EEC_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_419EC2C80BF73EA5(::FiveDimRenderingItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_419EC2C80BF73EA5_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_419EC2C80BF73EA5_1(::FiveDimRenderingItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_419EC2C80BF73EA5_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_2760FD3615174BA2(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_2760FD3615174BA2_OFFSET))(this, a1);
	}

	::System::Void Method_3_6454AD7212B2C6DE(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_6454AD7212B2C6DE_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
