#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeLeakDetectionMode.h"

#define UNITY_COLLECTIONS_NATIVELEAKDETECTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3BF750)
#define UNITY_COLLECTIONS_NATIVELEAKDETECTION_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1B3BF760)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeLeakDetection_TypeDefinitionIndex = 5087;

	class NativeLeakDetection : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_NativeLeakDetectionMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NativeLeakDetection_TypeDefinitionIndex)->GetStaticField(0x2DC0);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELEAKDETECTION_INITIALIZE_OFFSET))();
		}

		static ::System::Void set_Mode(::Unity::Collections::NativeLeakDetectionMode value)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeLeakDetectionMode))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELEAKDETECTION_SET_MODE_OFFSET))(value);
		}
	};
}
