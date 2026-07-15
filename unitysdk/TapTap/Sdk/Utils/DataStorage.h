#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define TAPTAP_SDK_UTILS_DATASTORAGE_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x1D1E0540)
#define TAPTAP_SDK_UTILS_DATASTORAGE_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x1D1DFEA0)
#define TAPTAP_SDK_UTILS_DATASTORAGE_GETMACADDRESS_OFFSET UNITYSDK_OFFSET(0x1D1E0960)
#define TAPTAP_SDK_UTILS_DATASTORAGE_LOADSTRINGFROMCACHE_OFFSET UNITYSDK_OFFSET(0x1D1E02C0)
#define TAPTAP_SDK_UTILS_DATASTORAGE_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x1D1D3540)
#define TAPTAP_SDK_UTILS_DATASTORAGE_SAVESTRINGTOCACHE_OFFSET UNITYSDK_OFFSET(0x1D1DFBD0)
#define TAPTAP_SDK_UTILS_DATASTORAGE_SAVESTRING_OFFSET UNITYSDK_OFFSET(0x1D1D42C0)
#define TAPTAP_SDK_UTILS_DATASTORAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E0C10)

namespace TapTap::Sdk::Utils
{
	inline static constexpr unsigned int DataStorage_TypeDefinitionIndex = 7095;

	class DataStorage : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_dataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DataStorage_TypeDefinitionIndex)->GetStaticField(0x5C0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_Keys()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DataStorage_TypeDefinitionIndex)->GetStaticField(0x5C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE__CCTOR_OFFSET))();
		}

		static ::System::Void SaveString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_SAVESTRING_OFFSET))(a1, a2);
		}

		static ::System::String* LoadString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_LOADSTRING_OFFSET))(a1);
		}

		static ::System::Void SaveStringToCache(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_SAVESTRINGTOCACHE_OFFSET))(a1, a2);
		}

		static ::System::String* LoadStringFromCache(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_LOADSTRINGFROMCACHE_OFFSET))(a1);
		}

		static ::System::String* EncodeString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_ENCODESTRING_OFFSET))(a1);
		}

		static ::System::String* DecodeString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_DECODESTRING_OFFSET))(a1);
		}

		static ::System::String* GetMacAddress()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_GETMACADDRESS_OFFSET))();
		}
	};
}
