#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"

namespace System { template <typename T> class Comparison_1; }

#define MIHOYOEMOTION_STOPSHAPEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D050480)
#define MIHOYOEMOTION_STOPSHAPEDATA___C__CLEAR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D0504D0)
#define MIHOYOEMOTION_STOPSHAPEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0504C0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int StopShapeData___c_TypeDefinitionIndex = 40070;

	class StopShapeData___c : public ::System::Object
	{
	public:
		static ::miHoYoEmotion::StopShapeData___c** StaticGet___9()
		{
			return (::miHoYoEmotion::StopShapeData___c**)Il2CppClass::FromTypeDefinitionIndex(StopShapeData___c_TypeDefinitionIndex)->GetStaticField(0x2C900);
		}
		static ::System::Comparison_1<::miHoYoEmotion::BlendShapeData>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::miHoYoEmotion::BlendShapeData>**)Il2CppClass::FromTypeDefinitionIndex(StopShapeData___c_TypeDefinitionIndex)->GetStaticField(0x2C908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Clear_b__3_0(::miHoYoEmotion::BlendShapeData a, ::miHoYoEmotion::BlendShapeData b)
		{
			return ((::System::Int32(*)(::PVOID, ::miHoYoEmotion::BlendShapeData, ::miHoYoEmotion::BlendShapeData))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA___C__CLEAR_B__3_0_OFFSET))(this, a, b);
		}
	};
}
