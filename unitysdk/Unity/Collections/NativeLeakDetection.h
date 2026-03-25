#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_COLLECTIONS_NATIVELEAKDETECTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x189EA0B0)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeLeakDetection_TypeDefinitionIndex = 3796;

	class NativeLeakDetection : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_NativeLeakDetectionMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NativeLeakDetection_TypeDefinitionIndex)->GetStaticField(0x5580);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELEAKDETECTION_INITIALIZE_OFFSET))();
		}
	};
}
