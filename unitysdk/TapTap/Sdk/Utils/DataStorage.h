#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define TAPTAP_SDK_UTILS_DATASTORAGE_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x1A1C5D10)
#define TAPTAP_SDK_UTILS_DATASTORAGE_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x1A1C5710)
#define TAPTAP_SDK_UTILS_DATASTORAGE_GETMACADDRESS_OFFSET UNITYSDK_OFFSET(0x1A1C6100)
#define TAPTAP_SDK_UTILS_DATASTORAGE_LOADSTRINGFROMCACHE_OFFSET UNITYSDK_OFFSET(0x1A1C5AF0)
#define TAPTAP_SDK_UTILS_DATASTORAGE_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x1A1BA6C0)
#define TAPTAP_SDK_UTILS_DATASTORAGE_SAVESTRINGTOCACHE_OFFSET UNITYSDK_OFFSET(0x1A1C5430)
#define TAPTAP_SDK_UTILS_DATASTORAGE_SAVESTRING_OFFSET UNITYSDK_OFFSET(0x1A1BB440)
#define TAPTAP_SDK_UTILS_DATASTORAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1C6300)

namespace TapTap::Sdk::Utils
{
	inline static constexpr unsigned int DataStorage_TypeDefinitionIndex = 6473;

	class DataStorage : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_dataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DataStorage_TypeDefinitionIndex)->GetStaticField(0x550);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_Keys()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DataStorage_TypeDefinitionIndex)->GetStaticField(0x558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE__CCTOR_OFFSET))();
		}

		static ::System::Void SaveString(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_SAVESTRING_OFFSET))(key, value);
		}

		static ::System::String* LoadString(::System::String* key)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_LOADSTRING_OFFSET))(key);
		}

		static ::System::Void SaveStringToCache(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_SAVESTRINGTOCACHE_OFFSET))(key, value);
		}

		static ::System::String* LoadStringFromCache(::System::String* key)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_LOADSTRINGFROMCACHE_OFFSET))(key);
		}

		static ::System::String* EncodeString(::System::String* encryptString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_ENCODESTRING_OFFSET))(encryptString);
		}

		static ::System::String* DecodeString(::System::String* decryptString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_DECODESTRING_OFFSET))(decryptString);
		}

		static ::System::String* GetMacAddress()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_DATASTORAGE_GETMACADDRESS_OFFSET))();
		}
	};
}
