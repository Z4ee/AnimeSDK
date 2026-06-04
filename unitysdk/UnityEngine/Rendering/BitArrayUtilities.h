#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET128_OFFSET UNITYSDK_OFFSET(0x1B160150)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET16_OFFSET UNITYSDK_OFFSET(0x1B160800)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET256_OFFSET UNITYSDK_OFFSET(0x1B161240)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET32_OFFSET UNITYSDK_OFFSET(0x1B161B60)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET64_OFFSET UNITYSDK_OFFSET(0x1B1620F0)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET8_OFFSET UNITYSDK_OFFSET(0x1B162600)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET128_OFFSET UNITYSDK_OFFSET(0x1B1601A0)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET16_OFFSET UNITYSDK_OFFSET(0x1B160830)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET256_OFFSET UNITYSDK_OFFSET(0x1B161320)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET32_OFFSET UNITYSDK_OFFSET(0x1B161B90)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET64_OFFSET UNITYSDK_OFFSET(0x1B162120)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET8_OFFSET UNITYSDK_OFFSET(0x1B162630)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArrayUtilities_TypeDefinitionIndex = 33788;

	class BitArrayUtilities : public ::System::Object
	{
	public:
		static ::System::Boolean Get8(::System::UInt32 a1, ::System::Byte a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET8_OFFSET))(a1, a2);
		}

		static ::System::Boolean Get16(::System::UInt32 a1, ::System::UInt16 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET16_OFFSET))(a1, a2);
		}

		static ::System::Boolean Get32(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET32_OFFSET))(a1, a2);
		}

		static ::System::Boolean Get64(::System::UInt32 a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET64_OFFSET))(a1, a2);
		}

		static ::System::Boolean Get128(::System::UInt32 a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET128_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Get256(::System::UInt32 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4, ::System::UInt64 a5)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET256_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Set8(::System::UInt32 a1, ::System::Byte& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET8_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Set16(::System::UInt32 a1, ::System::UInt16& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt16&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET16_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Set32(::System::UInt32 a1, ::System::UInt32& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET32_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Set64(::System::UInt32 a1, ::System::UInt64& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt64&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET64_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Set128(::System::UInt32 a1, ::System::UInt64& a2, ::System::UInt64& a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt64&, ::System::UInt64&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET128_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Set256(::System::UInt32 a1, ::System::UInt64& a2, ::System::UInt64& a3, ::System::UInt64& a4, ::System::UInt64& a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET256_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
