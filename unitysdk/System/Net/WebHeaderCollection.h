#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NameValueCollection.h"
#include "unitysdk/System/Net/HttpRequestHeader.h"
#include "unitysdk/System/Net/WebHeaderCollectionType.h"
#include "unitysdk/System/Net/WebHeaderCollection_RfcChar.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class NameObjectCollectionBase_KeysCollection; }
namespace System::Net { class HeaderInfoTable; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_WEBHEADERCOLLECTION_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x187214A0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x1871F160)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1872A450)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ALLOWMULTIVALUES_OFFSET UNITYSDK_OFFSET(0x187213F0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CHANGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18729C20)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CHECKBADCHARS_OFFSET UNITYSDK_OFFSET(0x18729D10)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CONTAINSNONASCIICHARS_OFFSET UNITYSDK_OFFSET(0x1872A110)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETASSTRING_OFFSET UNITYSDK_OFFSET(0x1872A8A0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1872B6A0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETKEY_OFFSET UNITYSDK_OFFSET(0x1872B090)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1872AD60)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_1_OFFSET UNITYSDK_OFFSET(0x1872B7F0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1871EC60)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_1_OFFSET UNITYSDK_OFFSET(0x1872B120)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLKEYS_OFFSET UNITYSDK_OFFSET(0x1872B880)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLOWHTTPREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x18729960)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1872B060)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_INNERCOLLECTION_OFFSET UNITYSDK_OFFSET(0x187298F0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1872B760)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x1872B1C0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ISVALIDTOKEN_OFFSET UNITYSDK_OFFSET(0x1872A170)
#define SYSTEM_NET_WEBHEADERCOLLECTION_NORMALIZECOMMONHEADERS_OFFSET UNITYSDK_OFFSET(0x18729740)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1872AD50)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18729CC0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x18729B10)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x187299A0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_OFFSET UNITYSDK_OFFSET(0x18721540)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SET_OFFSET UNITYSDK_OFFSET(0x1872A620)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1872B1B0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_THROWONRESTRICTEDHEADER_OFFSET UNITYSDK_OFFSET(0x1872A240)
#define SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1872A860)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1872B910)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1872AAC0)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1872AB80)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1871F090)

namespace System::Net
{
	inline static constexpr unsigned int WebHeaderCollection_TypeDefinitionIndex = 2751;

	class WebHeaderCollection : public ::System::Collections::Specialized::NameValueCollection
	{
	public:
		static ::Il2CppArray<::System::SByte>** StaticGet_s_CommonHeaderHints()
		{
			return (::Il2CppArray<::System::SByte>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0xC2F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_CommonHeaderNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0xC2F8);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_HttpTrimCharacters()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0xC300);
		}
		static ::Il2CppArray<::System::Net::WebHeaderCollection_RfcChar>** StaticGet_RfcCharMap()
		{
			return (::Il2CppArray<::System::Net::WebHeaderCollection_RfcChar>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0xC308);
		}
		static ::System::Net::HeaderInfoTable** StaticGet_HInfo()
		{
			return (::System::Net::HeaderInfoTable**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0xC310);
		}
		::System::Collections::Specialized::NameValueCollection* m_InnerCollection; // 0x60
		::Il2CppArray<::System::String*>* m_CommonHeaders; // 0x68
		::System::Int32 m_NumCommonHeaders; // 0x70
		::System::Net::WebHeaderCollectionType m_Type; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::WebHeaderCollectionType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollectionType))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_1_OFFSET))(this, type);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_2_OFFSET))(this, serializationInfo, streamingContext);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CCTOR_OFFSET))();
		}

		::System::Void NormalizeCommonHeaders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_NORMALIZECOMMONHEADERS_OFFSET))(this);
		}

		::System::Collections::Specialized::NameValueCollection* get_InnerCollection()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_INNERCOLLECTION_OFFSET))(this);
		}

		static ::System::Boolean AllowMultiValues(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ALLOWMULTIVALUES_OFFSET))(name);
		}

		::System::Boolean get_AllowHttpRequestHeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLOWHTTPREQUESTHEADER_OFFSET))(this);
		}

		::System::Void Remove(::System::Net::HttpRequestHeader header)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpRequestHeader))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET))(this, header);
		}

		::System::Void AddInternal(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADDINTERNAL_OFFSET))(this, name, value);
		}

		::System::Void ChangeInternal(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CHANGEINTERNAL_OFFSET))(this, name, value);
		}

		::System::Void RemoveInternal(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVEINTERNAL_OFFSET))(this, name);
		}

		static ::System::String* CheckBadChars(::System::String* name, ::System::Boolean isHeaderValue)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CHECKBADCHARS_OFFSET))(name, isHeaderValue);
		}

		static ::System::Boolean IsValidToken(::System::String* token)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ISVALIDTOKEN_OFFSET))(token);
		}

		static ::System::Boolean ContainsNonAsciiChars(::System::String* token)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CONTAINSNONASCIICHARS_OFFSET))(token);
		}

		::System::Void ThrowOnRestrictedHeader(::System::String* headerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_THROWONRESTRICTEDHEADER_OFFSET))(this, headerName);
		}

		::System::Void Add(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET))(this, name, value);
		}

		::System::Void Add_1(::System::String* header)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_1_OFFSET))(this, header);
		}

		::System::Void Set(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SET_OFFSET))(this, name, value);
		}

		::System::Void SetInternal(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_OFFSET))(this, name, value);
		}

		::System::Void Remove_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_1_OFFSET))(this, name);
		}

		::Il2CppArray<::System::String*>* GetValues(::System::String* header)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET))(this, header);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_OFFSET))(this);
		}

		static ::System::String* GetAsString(::System::Collections::Specialized::NameValueCollection* cc, ::System::Boolean winInetCompat, ::System::Boolean forTrace)
		{
			return ((::System::String*(*)(::System::Collections::Specialized::NameValueCollection*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETASSTRING_OFFSET))(cc, winInetCompat, forTrace);
		}

		::System::Void OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::String* Get(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_OFFSET))(this, name);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* get_Keys()
		{
			return ((::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_KEYS_OFFSET))(this);
		}

		::System::String* Get_1(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_1_OFFSET))(this, index);
		}

		::Il2CppArray<::System::String*>* GetValues_1(::System::Int32 index)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_1_OFFSET))(this, index);
		}

		::System::String* GetKey(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETKEY_OFFSET))(this, index);
		}

		::Il2CppArray<::System::String*>* get_AllKeys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLKEYS_OFFSET))(this);
		}
	};
}
