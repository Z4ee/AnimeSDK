#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETCURRENTMETHODRID_OFFSET UNITYSDK_OFFSET(0x15B65B50)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_UNLIKELY_OFFSET UNITYSDK_OFFSET(0x15B65B40)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppIntrinsics_TypeDefinitionIndex = 9804;

	class Il2CppIntrinsics : public ::System::Object
	{
	public:
		static ::System::Boolean Unlikely(::System::Boolean value)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_UNLIKELY_OFFSET))(value);
		}

		static ::System::Int32 GetCurrentMethodRID(::System::Int32 id)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETCURRENTMETHODRID_OFFSET))(id);
		}
	};
}
