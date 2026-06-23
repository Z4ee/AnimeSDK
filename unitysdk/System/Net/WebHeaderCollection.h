#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NameValueCollection.h"
#include "unitysdk/System/Net/DataParseStatus.h"
#include "unitysdk/System/Net/HttpRequestHeader.h"
#include "unitysdk/System/Net/HttpResponseHeader.h"
#include "unitysdk/System/Net/WebHeaderCollectionType.h"
#include "unitysdk/System/Net/WebHeaderCollection_RfcChar.h"
#include "unitysdk/System/Net/WebParseError.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class NameObjectCollectionBase_KeysCollection; }
namespace System::Net { class HeaderInfoTable; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_WEBHEADERCOLLECTION_ADDINTERNALNOTCOMMON_OFFSET UNITYSDK_OFFSET(0x1C083180)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C082E80)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADDWITHOUTVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C0823D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x1C081510)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_2_OFFSET UNITYSDK_OFFSET(0x1C0812C0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_3_OFFSET UNITYSDK_OFFSET(0x1C0836C0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1C081140)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ALLOWMULTIVALUES_OFFSET UNITYSDK_OFFSET(0x1C0807B0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CHANGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C082FA0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CHECKBADCHARS_OFFSET UNITYSDK_OFFSET(0x1C082620)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CHECKUPDATE_OFFSET UNITYSDK_OFFSET(0x1C083110)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C086710)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CONTAINSNONASCIICHARS_OFFSET UNITYSDK_OFFSET(0x1C0832A0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETASSTRING_OFFSET UNITYSDK_OFFSET(0x1C083D20)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C086270)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETKEY_OFFSET UNITYSDK_OFFSET(0x1C084EB0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C084C30)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_1_OFFSET UNITYSDK_OFFSET(0x1C086500)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1C0839F0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_1_OFFSET UNITYSDK_OFFSET(0x1C084FC0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLKEYS_OFFSET UNITYSDK_OFFSET(0x1C086610)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLOWHTTPREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1C0808A0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLOWHTTPRESPONSEHEADER_OFFSET UNITYSDK_OFFSET(0x1C0808E0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_CACHECONTROL_OFFSET UNITYSDK_OFFSET(0x1C07FB80)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C07F410)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C07FC40)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C084E80)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_DATE_OFFSET UNITYSDK_OFFSET(0x1C07FD00)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ETAG_OFFSET UNITYSDK_OFFSET(0x1C07FE80)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_EXPIRES_OFFSET UNITYSDK_OFFSET(0x1C07FDC0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_INNERCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C0806E0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1C080C50)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C080930)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1C0863C0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_LASTMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C07FF40)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1C080000)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x1C07F4D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_PROXYAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1C0800D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_SERVER_OFFSET UNITYSDK_OFFSET(0x1C080310)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_SETCOOKIE2_OFFSET UNITYSDK_OFFSET(0x1C080190)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_SETCOOKIE_OFFSET UNITYSDK_OFFSET(0x1C080250)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_VIA_OFFSET UNITYSDK_OFFSET(0x1C0803D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_INTERNALHASKEYS_OFFSET UNITYSDK_OFFSET(0x1C0864C0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ISRESTRICTED_1_OFFSET UNITYSDK_OFFSET(0x1C0840A0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ISRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1C084040)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ISVALIDTOKEN_OFFSET UNITYSDK_OFFSET(0x1C083350)
#define SYSTEM_NET_WEBHEADERCOLLECTION_NORMALIZECOMMONHEADERS_OFFSET UNITYSDK_OFFSET(0x1C080490)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1C084C20)
#define SYSTEM_NET_WEBHEADERCOLLECTION_PARSEHEADERSSTRICT_OFFSET UNITYSDK_OFFSET(0x1C085750)
#define SYSTEM_NET_WEBHEADERCOLLECTION_PARSEHEADERS_OFFSET UNITYSDK_OFFSET(0x1C0850D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C0830C0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1C082260)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1C082150)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C081FE0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SETADDVERIFIED_OFFSET UNITYSDK_OFFSET(0x1C082BC0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1C07C150)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C081DB0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SET_1_OFFSET UNITYSDK_OFFSET(0x1C081B80)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SET_2_OFFSET UNITYSDK_OFFSET(0x1C0818C0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1C080F00)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C080AC0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SET_OFFSET UNITYSDK_OFFSET(0x1C081740)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C086260)
#define SYSTEM_NET_WEBHEADERCOLLECTION_THROWONRESTRICTEDHEADER_OFFSET UNITYSDK_OFFSET(0x1C0834B0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1C083FD0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C083F70)
#define SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C083CC0)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C086740)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C084190)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C0842D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C084920)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C079CF0)

namespace System::Net
{
	inline static constexpr unsigned int WebHeaderCollection_TypeDefinitionIndex = 3341;

	class WebHeaderCollection : public ::System::Collections::Specialized::NameValueCollection
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_HttpTrimCharacters()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0x3A90);
		}
		static ::System::Net::HeaderInfoTable** StaticGet_HInfo()
		{
			return (::System::Net::HeaderInfoTable**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0x3A98);
		}
		static ::Il2CppArray<::System::Net::WebHeaderCollection_RfcChar>** StaticGet_RfcCharMap()
		{
			return (::Il2CppArray<::System::Net::WebHeaderCollection_RfcChar>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0x3AA0);
		}
		static ::Il2CppArray<::System::SByte>** StaticGet_s_CommonHeaderHints()
		{
			return (::Il2CppArray<::System::SByte>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0x3AA8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_CommonHeaderNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0x3AB0);
		}
		// static const ::System::Int32 ApproxAveHeaderLineSize = 0x1E; // 0x0
		// static const ::System::Int32 ApproxHighAvgNumHeaders = 0x10; // 0x0
		// static const ::System::Int32 c_AcceptRanges = 0x0; // 0x0
		// static const ::System::Int32 c_ContentLength = 0x1; // 0x0
		// static const ::System::Int32 c_CacheControl = 0x2; // 0x0
		// static const ::System::Int32 c_ContentType = 0x3; // 0x0
		// static const ::System::Int32 c_Date = 0x4; // 0x0
		// static const ::System::Int32 c_Expires = 0x5; // 0x0
		// static const ::System::Int32 c_ETag = 0x6; // 0x0
		// static const ::System::Int32 c_LastModified = 0x7; // 0x0
		// static const ::System::Int32 c_Location = 0x8; // 0x0
		// static const ::System::Int32 c_ProxyAuthenticate = 0x9; // 0x0
		// static const ::System::Int32 c_P3P = 0xA; // 0x0
		// static const ::System::Int32 c_SetCookie2 = 0xB; // 0x0
		// static const ::System::Int32 c_SetCookie = 0xC; // 0x0
		// static const ::System::Int32 c_Server = 0xD; // 0x0
		// static const ::System::Int32 c_Via = 0xE; // 0x0
		// static const ::System::Int32 c_WwwAuthenticate = 0xF; // 0x0
		// static const ::System::Int32 c_XAspNetVersion = 0x10; // 0x0
		// static const ::System::Int32 c_XPoweredBy = 0x11; // 0x0
		::System::Collections::Specialized::NameValueCollection* m_InnerCollection; // 0x60
		::Il2CppArray<::System::String*>* m_CommonHeaders; // 0x68
		::System::Net::WebHeaderCollectionType m_Type; // 0x70
		::System::Int32 m_NumCommonHeaders; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::WebHeaderCollectionType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollectionType))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_1_OFFSET))(this, type);
		}

		::System::Void _ctor_2(::System::Collections::Specialized::NameValueCollection* cc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_2_OFFSET))(this, cc);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_3_OFFSET))(this, serializationInfo, streamingContext);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CCTOR_OFFSET))();
		}

		::System::String* get_ContentLength()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::String* get_CacheControl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_CACHECONTROL_OFFSET))(this);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::String* get_Date()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_DATE_OFFSET))(this);
		}

		::System::String* get_Expires()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_EXPIRES_OFFSET))(this);
		}

		::System::String* get_ETag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_ETAG_OFFSET))(this);
		}

		::System::String* get_LastModified()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_LASTMODIFIED_OFFSET))(this);
		}

		::System::String* get_Location()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_LOCATION_OFFSET))(this);
		}

		::System::String* get_ProxyAuthenticate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_PROXYAUTHENTICATE_OFFSET))(this);
		}

		::System::String* get_SetCookie2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_SETCOOKIE2_OFFSET))(this);
		}

		::System::String* get_SetCookie()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_SETCOOKIE_OFFSET))(this);
		}

		::System::String* get_Server()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_SERVER_OFFSET))(this);
		}

		::System::String* get_Via()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_VIA_OFFSET))(this);
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

		::System::Boolean get_AllowHttpResponseHeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLOWHTTPRESPONSEHEADER_OFFSET))(this);
		}

		::System::String* get_Item(::System::Net::HttpRequestHeader header)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::HttpRequestHeader))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_ITEM_OFFSET))(this, header);
		}

		::System::Void set_Item(::System::Net::HttpRequestHeader header, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpRequestHeader, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SET_ITEM_OFFSET))(this, header, value);
		}

		::System::String* get_Item_1(::System::Net::HttpResponseHeader header)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::HttpResponseHeader))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_ITEM_1_OFFSET))(this, header);
		}

		::System::Void set_Item_1(::System::Net::HttpResponseHeader header, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpResponseHeader, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SET_ITEM_1_OFFSET))(this, header, value);
		}

		::System::Void Add(::System::Net::HttpRequestHeader header, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpRequestHeader, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET))(this, header, value);
		}

		::System::Void Add_1(::System::Net::HttpResponseHeader header, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpResponseHeader, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_1_OFFSET))(this, header, value);
		}

		::System::Void Set(::System::Net::HttpRequestHeader header, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpRequestHeader, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SET_OFFSET))(this, header, value);
		}

		::System::Void Set_1(::System::Net::HttpResponseHeader header, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpResponseHeader, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SET_1_OFFSET))(this, header, value);
		}

		::System::Void SetInternal(::System::Net::HttpResponseHeader header, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpResponseHeader, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_OFFSET))(this, header, value);
		}

		::System::Void Remove(::System::Net::HttpRequestHeader header)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpRequestHeader))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET))(this, header);
		}

		::System::Void Remove_1(::System::Net::HttpResponseHeader header)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpResponseHeader))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_1_OFFSET))(this, header);
		}

		::System::Void AddWithoutValidate(::System::String* headerName, ::System::String* headerValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADDWITHOUTVALIDATE_OFFSET))(this, headerName, headerValue);
		}

		::System::Void SetAddVerified(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SETADDVERIFIED_OFFSET))(this, name, value);
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

		::System::Void CheckUpdate(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CHECKUPDATE_OFFSET))(this, name, value);
		}

		::System::Void AddInternalNotCommon(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADDINTERNALNOTCOMMON_OFFSET))(this, name, value);
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

		::System::Void Add_2(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_2_OFFSET))(this, name, value);
		}

		::System::Void Add_3(::System::String* header)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_3_OFFSET))(this, header);
		}

		::System::Void Set_2(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SET_2_OFFSET))(this, name, value);
		}

		::System::Void SetInternal_1(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_1_OFFSET))(this, name, value);
		}

		::System::Void Remove_2(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_2_OFFSET))(this, name);
		}

		::Il2CppArray<::System::String*>* GetValues(::System::String* header)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET))(this, header);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Boolean forTrace)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_1_OFFSET))(this, forTrace);
		}

		static ::System::String* GetAsString(::System::Collections::Specialized::NameValueCollection* cc, ::System::Boolean winInetCompat, ::System::Boolean forTrace)
		{
			return ((::System::String*(*)(::System::Collections::Specialized::NameValueCollection*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETASSTRING_OFFSET))(cc, winInetCompat, forTrace);
		}

		::Il2CppArray<::System::Byte>* ToByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_TOBYTEARRAY_OFFSET))(this);
		}

		static ::System::Boolean IsRestricted(::System::String* headerName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ISRESTRICTED_OFFSET))(headerName);
		}

		static ::System::Boolean IsRestricted_1(::System::String* headerName, ::System::Boolean response)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ISRESTRICTED_1_OFFSET))(headerName, response);
		}

		::System::Void OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Net::DataParseStatus ParseHeaders(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 size, ::System::Int32& unparsed, ::System::Int32& totalResponseHeadersLength, ::System::Int32 maximumResponseHeadersLength, ::System::Net::WebParseError& parseError)
		{
			return ((::System::Net::DataParseStatus(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32, ::System::Net::WebParseError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_PARSEHEADERS_OFFSET))(this, buffer, size, unparsed, totalResponseHeadersLength, maximumResponseHeadersLength, parseError);
		}

		::System::Net::DataParseStatus ParseHeadersStrict(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 size, ::System::Int32& unparsed, ::System::Int32& totalResponseHeadersLength, ::System::Int32 maximumResponseHeadersLength, ::System::Net::WebParseError& parseError)
		{
			return ((::System::Net::DataParseStatus(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32, ::System::Net::WebParseError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_PARSEHEADERSSTRICT_OFFSET))(this, buffer, size, unparsed, totalResponseHeadersLength, maximumResponseHeadersLength, parseError);
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

		::System::Boolean InternalHasKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_INTERNALHASKEYS_OFFSET))(this);
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

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CLEAR_OFFSET))(this);
		}
	};
}
