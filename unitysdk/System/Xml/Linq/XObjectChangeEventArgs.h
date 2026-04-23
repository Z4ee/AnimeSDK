#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/Xml/Linq/XObjectChange.h"

#define SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F9A730)
#define SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9A700)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XObjectChangeEventArgs_TypeDefinitionIndex = 4909;

	class XObjectChangeEventArgs : public ::System::EventArgs
	{
	public:
		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Remove()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)Il2CppClass::FromTypeDefinitionIndex(XObjectChangeEventArgs_TypeDefinitionIndex)->GetStaticField(0x190);
		}
		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Add()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)Il2CppClass::FromTypeDefinitionIndex(XObjectChangeEventArgs_TypeDefinitionIndex)->GetStaticField(0x198);
		}
		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Name()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)Il2CppClass::FromTypeDefinitionIndex(XObjectChangeEventArgs_TypeDefinitionIndex)->GetStaticField(0x1A0);
		}
		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Value()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)Il2CppClass::FromTypeDefinitionIndex(XObjectChangeEventArgs_TypeDefinitionIndex)->GetStaticField(0x1A8);
		}
		::System::Xml::Linq::XObjectChange objectChange; // 0x10

		::System::Void _ctor(::System::Xml::Linq::XObjectChange objectChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XObjectChange))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS__CTOR_OFFSET))(this, objectChange);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS__CCTOR_OFFSET))();
		}
	};
}
