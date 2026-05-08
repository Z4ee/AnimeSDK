#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_COMBINE_OFFSET UNITYSDK_OFFSET(0x1BA1E4F0)
#define SYSTEM_NUMERICS_HASHING_HASHHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA1E500)

namespace System::Numerics::Hashing
{
	inline static constexpr unsigned int HashHelpers_TypeDefinitionIndex = 7558;

	class HashHelpers : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_RandomSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x32E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS__CCTOR_OFFSET))();
		}

		static ::System::Int32 Combine(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_COMBINE_OFFSET))(h1, h2);
		}
	};
}
