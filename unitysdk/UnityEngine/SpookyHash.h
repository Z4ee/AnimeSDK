#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SPOOKYHASH_ATTEMPTDETECTALLOWUNALIGNEDREAD_OFFSET UNITYSDK_OFFSET(0x1A486440)
#define UNITYENGINE_SPOOKYHASH_ENDPARTIAL_OFFSET UNITYSDK_OFFSET(0x1A4878F0)
#define UNITYENGINE_SPOOKYHASH_END_OFFSET UNITYSDK_OFFSET(0x1A4876A0)
#define UNITYENGINE_SPOOKYHASH_HASH_OFFSET UNITYSDK_OFFSET(0x1A4864E0)
#define UNITYENGINE_SPOOKYHASH_MEMSET_OFFSET UNITYSDK_OFFSET(0x1A487400)
#define UNITYENGINE_SPOOKYHASH_MIX_OFFSET UNITYSDK_OFFSET(0x1A487190)
#define UNITYENGINE_SPOOKYHASH_ROT64_OFFSET UNITYSDK_OFFSET(0x1A487AA0)
#define UNITYENGINE_SPOOKYHASH_SHORTEND_OFFSET UNITYSDK_OFFSET(0x1A487C10)
#define UNITYENGINE_SPOOKYHASH_SHORTMIX_OFFSET UNITYSDK_OFFSET(0x1A487AB0)
#define UNITYENGINE_SPOOKYHASH_SHORT_OFFSET UNITYSDK_OFFSET(0x1A486A30)
#define UNITYENGINE_SPOOKYHASH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A487D40)

namespace UnityEngine
{
	inline static constexpr unsigned int SpookyHash_TypeDefinitionIndex = 4017;

	class SpookyHash : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_AllowUnalignedRead()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpookyHash_TypeDefinitionIndex)->GetStaticField(0x5EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH__CCTOR_OFFSET))();
		}

		static ::System::Boolean AttemptDetectAllowUnalignedRead()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_ATTEMPTDETECTALLOWUNALIGNEDREAD_OFFSET))();
		}

		static ::System::Void Hash(::System::Void* message, ::System::UInt64 length, ::System::UInt64* hash1, ::System::UInt64* hash2)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt64, ::System::UInt64*, ::System::UInt64*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_HASH_OFFSET))(message, length, hash1, hash2);
		}

		static ::System::Void End(::System::UInt64* data, ::System::UInt64& h0, ::System::UInt64& h1, ::System::UInt64& h2, ::System::UInt64& h3, ::System::UInt64& h4, ::System::UInt64& h5, ::System::UInt64& h6, ::System::UInt64& h7, ::System::UInt64& h8, ::System::UInt64& h9, ::System::UInt64& h10, ::System::UInt64& h11)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_END_OFFSET))(data, h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11);
		}

		static ::System::Void EndPartial(::System::UInt64& h0, ::System::UInt64& h1, ::System::UInt64& h2, ::System::UInt64& h3, ::System::UInt64& h4, ::System::UInt64& h5, ::System::UInt64& h6, ::System::UInt64& h7, ::System::UInt64& h8, ::System::UInt64& h9, ::System::UInt64& h10, ::System::UInt64& h11)
		{
			return ((::System::Void(*)(::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_ENDPARTIAL_OFFSET))(h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11);
		}

		static ::System::Void Rot64(::System::UInt64& x, ::System::Int32 k)
		{
			return ((::System::Void(*)(::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_ROT64_OFFSET))(x, k);
		}

		static ::System::Void Short(::System::Void* message, ::System::UInt64 length, ::System::UInt64* hash1, ::System::UInt64* hash2)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt64, ::System::UInt64*, ::System::UInt64*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_SHORT_OFFSET))(message, length, hash1, hash2);
		}

		static ::System::Void ShortMix(::System::UInt64& h0, ::System::UInt64& h1, ::System::UInt64& h2, ::System::UInt64& h3)
		{
			return ((::System::Void(*)(::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_SHORTMIX_OFFSET))(h0, h1, h2, h3);
		}

		static ::System::Void ShortEnd(::System::UInt64& h0, ::System::UInt64& h1, ::System::UInt64& h2, ::System::UInt64& h3)
		{
			return ((::System::Void(*)(::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_SHORTEND_OFFSET))(h0, h1, h2, h3);
		}

		static ::System::Void Mix(::System::UInt64* data, ::System::UInt64& s0, ::System::UInt64& s1, ::System::UInt64& s2, ::System::UInt64& s3, ::System::UInt64& s4, ::System::UInt64& s5, ::System::UInt64& s6, ::System::UInt64& s7, ::System::UInt64& s8, ::System::UInt64& s9, ::System::UInt64& s10, ::System::UInt64& s11)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_MIX_OFFSET))(data, s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11);
		}

		static ::System::Void memset(::System::Void* dst, ::System::Int32 value, ::System::UInt64 numberOfBytes)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_MEMSET_OFFSET))(dst, value, numberOfBytes);
		}
	};
}
