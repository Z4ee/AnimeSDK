#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Xml::Linq { class XNamespace; }

#define SYSTEM_XML_LINQ_XNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D1A57A0)
#define SYSTEM_XML_LINQ_XNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D1A57B0)
#define SYSTEM_XML_LINQ_XNAME_GET_1_OFFSET UNITYSDK_OFFSET(0x1D1A56B0)
#define SYSTEM_XML_LINQ_XNAME_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1D1A50C0)
#define SYSTEM_XML_LINQ_XNAME_GET_NAMESPACENAME_OFFSET UNITYSDK_OFFSET(0x1D198A10)
#define SYSTEM_XML_LINQ_XNAME_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1D1A50D0)
#define SYSTEM_XML_LINQ_XNAME_GET_OFFSET UNITYSDK_OFFSET(0x1D198F50)
#define SYSTEM_XML_LINQ_XNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D199AF0)
#define SYSTEM_XML_LINQ_XNAME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D1A5790)
#define SYSTEM_XML_LINQ_XNAME_SYSTEM_IEQUATABLE_SYSTEM_XML_LINQ_XNAME__EQUALS_OFFSET UNITYSDK_OFFSET(0x1D1A57C0)
#define SYSTEM_XML_LINQ_XNAME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D1A57D0)
#define SYSTEM_XML_LINQ_XNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D1A50E0)
#define SYSTEM_XML_LINQ_XNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1A5910)
#define SYSTEM_XML_LINQ_XNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A4F50)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XName_TypeDefinitionIndex = 3866;

	class XName : public ::System::Object
	{
	public:
		::System::Xml::Linq::XNamespace* ns; // 0x10
		::System::String* localName; // 0x18
		::System::Int32 hashCode; // 0x20

		::System::Void _ctor(::System::Xml::Linq::XNamespace* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNamespace*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME__CTOR_1_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::Linq::XNamespace* get_Namespace()
		{
			return ((::System::Xml::Linq::XNamespace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GET_NAMESPACE_OFFSET))(this);
		}

		::System::String* get_NamespaceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GET_NAMESPACENAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_TOSTRING_OFFSET))(this);
		}

		static ::System::Xml::Linq::XName* Get(::System::String* a1)
		{
			return ((::System::Xml::Linq::XName*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GET_OFFSET))(a1);
		}

		static ::System::Xml::Linq::XName* Get_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Xml::Linq::XName*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GET_1_OFFSET))(a1, a2);
		}

		static ::System::Xml::Linq::XName* op_Implicit(::System::String* a1)
		{
			return ((::System::Xml::Linq::XName*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Xml::Linq::XName* a1, ::System::Xml::Linq::XName* a2)
		{
			return ((::System::Boolean(*)(::System::Xml::Linq::XName*, ::System::Xml::Linq::XName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean System_IEquatable_System_Xml_Linq_XName__Equals(::System::Xml::Linq::XName* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Linq::XName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_SYSTEM_IEQUATABLE_SYSTEM_XML_LINQ_XNAME__EQUALS_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
