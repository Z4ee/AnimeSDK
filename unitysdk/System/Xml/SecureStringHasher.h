#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class SecureStringHasher_HashCodeOfStringDelegate; }

#define SYSTEM_XML_SECURESTRINGHASHER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD22AD0)
#define SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1DD22B50)
#define SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEOFSTRING_OFFSET UNITYSDK_OFFSET(0x1DD22D10)
#define SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD22AF0)
#define SYSTEM_XML_SECURESTRINGHASHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD22A80)

namespace System::Xml
{
	inline static constexpr unsigned int SecureStringHasher_TypeDefinitionIndex = 1698;

	class SecureStringHasher : public ::System::Object
	{
	public:
		static ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate** StaticGet_hashCodeDelegate()
		{
			return (::System::Xml::SecureStringHasher_HashCodeOfStringDelegate**)Il2CppClass::FromTypeDefinitionIndex(SecureStringHasher_TypeDefinitionIndex)->GetStaticField(0x1D30);
		}
		::System::Int32 hashCodeRandomizer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::String* x, ::System::String* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::String* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODE_OFFSET))(this, key);
		}

		static ::System::Int32 GetHashCodeOfString(::System::String* key, ::System::Int32 sLen, ::System::Int64 additionalEntropy)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEOFSTRING_OFFSET))(key, sLen, additionalEntropy);
		}

		static ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* GetHashCodeDelegate()
		{
			return ((::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEDELEGATE_OFFSET))();
		}
	};
}
