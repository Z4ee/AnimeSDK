#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Xml::Serialization { class TypeData; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_CHECKOPTIONALVALUETYPE_OFFSET UNITYSDK_OFFSET(0x19D4BF10)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUESPECIFIED_OFFSET UNITYSDK_OFFSET(0x19D4BF90)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x19D49560)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x19D4BDE0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISOPTIONALVALUETYPE_OFFSET UNITYSDK_OFFSET(0x19D4A2B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x19D43B10)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_INITMEMBER_OFFSET UNITYSDK_OFFSET(0x19D4BBE0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19D4A130)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUESPECIFIED_OFFSET UNITYSDK_OFFSET(0x19D4A2C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x19D49A00)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x19D4A1A0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISOPTIONALVALUETYPE_OFFSET UNITYSDK_OFFSET(0x19D4BEF0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x19D4BF00)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4BB70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMember_TypeDefinitionIndex = 1925;

	class XmlTypeMapMember : public ::System::Object
	{
	public:
		::System::Reflection::MemberInfo* _specifiedMember; // 0x10
		::System::Reflection::MethodInfo* _shouldSerialize; // 0x18
		::System::String* _name; // 0x20
		::System::Xml::Serialization::TypeData* _typeData; // 0x28
		::System::Reflection::MemberInfo* _member; // 0x30
		::System::Object* _defaultValue; // 0x38
		::System::Int32 _flags; // 0x40
		::System::Int32 _index; // 0x44
		::System::Int32 _globalIndex; // 0x48
		::System::Int32 _specifiedGlobalIndex; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsReadOnly(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_ISREADONLY_OFFSET))(this, type);
		}

		static ::System::Object* GetValue(::System::Object* ob, ::System::String* name)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_OFFSET))(ob, name);
		}

		::System::Object* GetValue_1(::System::Object* ob)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_1_OFFSET))(this, ob);
		}

		::System::Void SetValue(::System::Object* ob, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_OFFSET))(this, ob, value);
		}

		static ::System::Void SetValue_1(::System::Object* ob, ::System::String* name, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_1_OFFSET))(ob, name, value);
		}

		::System::Void InitMember(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_INITMEMBER_OFFSET))(this, type);
		}

		::System::Boolean get_IsOptionalValueType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISOPTIONALVALUETYPE_OFFSET))(this);
		}

		::System::Void set_IsOptionalValueType(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISOPTIONALVALUETYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsReturnValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISRETURNVALUE_OFFSET))(this);
		}

		::System::Void set_IsReturnValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISRETURNVALUE_OFFSET))(this, value);
		}

		::System::Void CheckOptionalValueType(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_CHECKOPTIONALVALUETYPE_OFFSET))(this, type);
		}

		::System::Boolean GetValueSpecified(::System::Object* ob)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUESPECIFIED_OFFSET))(this, ob);
		}

		::System::Void SetValueSpecified(::System::Object* ob, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUESPECIFIED_OFFSET))(this, ob, value);
		}
	};
}
