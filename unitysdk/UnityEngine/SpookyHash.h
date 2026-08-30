#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SPOOKYHASH_ATTEMPTDETECTALLOWUNALIGNEDREAD_OFFSET UNITYSDK_OFFSET(0x1ED652C0)
#define UNITYENGINE_SPOOKYHASH_ENDPARTIAL_OFFSET UNITYSDK_OFFSET(0x1ED66740)
#define UNITYENGINE_SPOOKYHASH_END_OFFSET UNITYSDK_OFFSET(0x1ED664F0)
#define UNITYENGINE_SPOOKYHASH_HASH_OFFSET UNITYSDK_OFFSET(0x1ED65370)
#define UNITYENGINE_SPOOKYHASH_MEMSET_OFFSET UNITYSDK_OFFSET(0x1ED66250)
#define UNITYENGINE_SPOOKYHASH_MIX_OFFSET UNITYSDK_OFFSET(0x1ED65FE0)
#define UNITYENGINE_SPOOKYHASH_ROT64_OFFSET UNITYSDK_OFFSET(0x1ED668F0)
#define UNITYENGINE_SPOOKYHASH_SHORTEND_OFFSET UNITYSDK_OFFSET(0x1ED66A60)
#define UNITYENGINE_SPOOKYHASH_SHORTMIX_OFFSET UNITYSDK_OFFSET(0x1ED66900)
#define UNITYENGINE_SPOOKYHASH_SHORT_OFFSET UNITYSDK_OFFSET(0x1ED658C0)
#define UNITYENGINE_SPOOKYHASH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED66B90)

namespace UnityEngine
{
	inline static constexpr unsigned int SpookyHash_TypeDefinitionIndex = 4206;

	class SpookyHash : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_AllowUnalignedRead()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpookyHash_TypeDefinitionIndex)->GetStaticField(0x8120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH__CCTOR_OFFSET))();
		}

		static ::System::Boolean AttemptDetectAllowUnalignedRead()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_ATTEMPTDETECTALLOWUNALIGNEDREAD_OFFSET))();
		}

		static ::System::Void Hash(::System::Void* a1, ::System::UInt64 a2, ::System::UInt64* a3, ::System::UInt64* a4)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt64, ::System::UInt64*, ::System::UInt64*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_HASH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void End(::System::UInt64* a1, ::System::UInt64& a2, ::System::UInt64& a3, ::System::UInt64& a4, ::System::UInt64& a5, ::System::UInt64& a6, ::System::UInt64& a7, ::System::UInt64& a8, ::System::UInt64& a9, ::System::UInt64& a10, ::System::UInt64& a11, ::System::UInt64& a12, ::System::UInt64& a13)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_END_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void EndPartial(::System::UInt64& a1, ::System::UInt64& a2, ::System::UInt64& a3, ::System::UInt64& a4, ::System::UInt64& a5, ::System::UInt64& a6, ::System::UInt64& a7, ::System::UInt64& a8, ::System::UInt64& a9, ::System::UInt64& a10, ::System::UInt64& a11, ::System::UInt64& a12)
		{
			return ((::System::Void(*)(::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_ENDPARTIAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Void Rot64(::System::UInt64& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_ROT64_OFFSET))(a1, a2);
		}

		static ::System::Void Short(::System::Void* a1, ::System::UInt64 a2, ::System::UInt64* a3, ::System::UInt64* a4)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt64, ::System::UInt64*, ::System::UInt64*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_SHORT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ShortMix(::System::UInt64& a1, ::System::UInt64& a2, ::System::UInt64& a3, ::System::UInt64& a4)
		{
			return ((::System::Void(*)(::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_SHORTMIX_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ShortEnd(::System::UInt64& a1, ::System::UInt64& a2, ::System::UInt64& a3, ::System::UInt64& a4)
		{
			return ((::System::Void(*)(::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_SHORTEND_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Mix(::System::UInt64* a1, ::System::UInt64& a2, ::System::UInt64& a3, ::System::UInt64& a4, ::System::UInt64& a5, ::System::UInt64& a6, ::System::UInt64& a7, ::System::UInt64& a8, ::System::UInt64& a9, ::System::UInt64& a10, ::System::UInt64& a11, ::System::UInt64& a12, ::System::UInt64& a13)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_MIX_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void memset(::System::Void* a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_MEMSET_OFFSET))(a1, a2, a3);
		}
	};
}
