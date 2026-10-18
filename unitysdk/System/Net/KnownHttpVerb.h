#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Specialized { class ListDictionary; }

#define SYSTEM_NET_KNOWNHTTPVERB_PARSE_OFFSET UNITYSDK_OFFSET(0x1F03EFE0)
#define SYSTEM_NET_KNOWNHTTPVERB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F068AA0)
#define SYSTEM_NET_KNOWNHTTPVERB__CTOR_OFFSET UNITYSDK_OFFSET(0x1F068A80)

namespace System::Net
{
	inline static constexpr unsigned int KnownHttpVerb_TypeDefinitionIndex = 2753;

	class KnownHttpVerb : public ::System::Object
	{
	public:
		static ::System::Net::KnownHttpVerb** StaticGet_Head()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x26560);
		}
		static ::System::Net::KnownHttpVerb** StaticGet_Post()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x26568);
		}
		static ::System::Net::KnownHttpVerb** StaticGet_Get()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x26570);
		}
		static ::System::Collections::Specialized::ListDictionary** StaticGet_NamedHeaders()
		{
			return (::System::Collections::Specialized::ListDictionary**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x26578);
		}
		static ::System::Net::KnownHttpVerb** StaticGet_Put()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x26580);
		}
		static ::System::Net::KnownHttpVerb** StaticGet_MkCol()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x26588);
		}
		static ::System::Net::KnownHttpVerb** StaticGet_Connect()
		{
			return (::System::Net::KnownHttpVerb**)Il2CppClass::FromTypeDefinitionIndex(KnownHttpVerb_TypeDefinitionIndex)->GetStaticField(0x26590);
		}
		::System::String* Name; // 0x10
		::System::Boolean RequireContentBody; // 0x18
		::System::Boolean ExpectNoContentResponse; // 0x19
		::System::Boolean ContentBodyNotAllowed; // 0x1A
		::System::Boolean ConnectRequest; // 0x1B

		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB__CCTOR_OFFSET))();
		}

		static ::System::Net::KnownHttpVerb* Parse(::System::String* a1)
		{
			return ((::System::Net::KnownHttpVerb*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB_PARSE_OFFSET))(a1);
		}
	};
}
