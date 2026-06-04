#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETCURRENTMETHODRID_OFFSET UNITYSDK_OFFSET(0x17FAB8F0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_UNLIKELY_OFFSET UNITYSDK_OFFSET(0x17FAB8E0)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppIntrinsics_TypeDefinitionIndex = 9766;

	class Il2CppIntrinsics : public ::System::Object
	{
	public:
		static ::System::Boolean Unlikely(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_UNLIKELY_OFFSET))(a1);
		}

		static ::System::Int32 GetCurrentMethodRID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETCURRENTMETHODRID_OFFSET))(a1);
		}
	};
}
