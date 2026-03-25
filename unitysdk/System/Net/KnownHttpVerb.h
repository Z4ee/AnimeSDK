#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Specialized { class ListDictionary; }

#define SYSTEM_NET_KNOWNHTTPVERB_PARSE_OFFSET UNITYSDK_OFFSET(0x186D0170)
#define SYSTEM_NET_KNOWNHTTPVERB__CCTOR_OFFSET UNITYSDK_OFFSET(0x186F7220)
#define SYSTEM_NET_KNOWNHTTPVERB__CTOR_OFFSET UNITYSDK_OFFSET(0x186F7200)

namespace System::Net
{
	inline static constexpr unsigned int KnownHttpVerb_TypeDefinitionIndex = 2741;

	class KnownHttpVerb : public ::System::Object
	{
	public:
		static ::System::Collections::Specialized::ListDictionary** StaticGet_NamedHeaders()
		{
			return (::System::Collections::Specialized::ListDictionary**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x12510);
		}
		static ::System::Net::KnownHttpVerb** StaticGet_Head()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x12518);
		}
		static ::System::Net::KnownHttpVerb** StaticGet_Get()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x12520);
		}
		static ::System::Net::KnownHttpVerb** StaticGet_Put()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x12528);
		}
		static ::System::Net::KnownHttpVerb** StaticGet_Connect()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x12530);
		}
		static ::System::Net::KnownHttpVerb** StaticGet_Post()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x12538);
		}
		static ::System::Net::KnownHttpVerb** StaticGet_MkCol()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x12540);
		}
		::System::String* Name; // 0x10
		::System::Boolean RequireContentBody; // 0x18
		::System::Boolean ExpectNoContentResponse; // 0x19
		::System::Boolean ContentBodyNotAllowed; // 0x1A
		::System::Boolean ConnectRequest; // 0x1B

		::System::Void _ctor(::System::String* name, ::System::Boolean requireContentBody, ::System::Boolean contentBodyNotAllowed, ::System::Boolean connectRequest, ::System::Boolean expectNoContentResponse)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB__CTOR_OFFSET))(this, name, requireContentBody, contentBodyNotAllowed, connectRequest, expectNoContentResponse);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB__CCTOR_OFFSET))();
		}

		static ::System::Net::KnownHttpVerb* Parse(::System::String* name)
		{
			return ((::System::Net::KnownHttpVerb*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB_PARSE_OFFSET))(name);
		}
	};
}
