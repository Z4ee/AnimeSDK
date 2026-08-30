#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_POOLED_MATHHELPER_GETINDEXOFPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1ED457D0)
#define UNITYENGINE_POOLED_MATHHELPER_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1ED457C0)
#define UNITYENGINE_POOLED_MATHHELPER_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1ED45790)
#define UNITYENGINE_POOLED_MATHHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED45850)

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int MathHelper_TypeDefinitionIndex = 4524;

	class MathHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Log2()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MathHelper_TypeDefinitionIndex)->GetStaticField(0x11230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_MATHHELPER__CCTOR_OFFSET))();
		}

		static ::System::Int32 NextPowerOfTwo(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_MATHHELPER_NEXTPOWEROFTWO_OFFSET))(a1);
		}

		static ::System::Boolean IsPowerOfTwo(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_MATHHELPER_ISPOWEROFTWO_OFFSET))(a1);
		}

		static ::System::Int32 GetIndexOfPowerOfTwo(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_MATHHELPER_GETINDEXOFPOWEROFTWO_OFFSET))(a1);
		}
	};
}
