#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Xml::Serialization { class TypeData; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_CHECKOPTIONALVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1AE7EB90)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUESPECIFIED_OFFSET UNITYSDK_OFFSET(0x1AE9AC70)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1AE8FB20)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1AE9E3B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1AE9E1F0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_GLOBALINDEX_OFFSET UNITYSDK_OFFSET(0x1AE9E500)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1AE9E4E0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISOPTIONALVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1AE90AE0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x1AE89740)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AE9E1D0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_TYPEDATA_OFFSET UNITYSDK_OFFSET(0x1AE9E4C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_INITMEMBER_OFFSET UNITYSDK_OFFSET(0x1AE9E210)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AE90680)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUESPECIFIED_OFFSET UNITYSDK_OFFSET(0x1AE90AF0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1AE8FFD0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1AE909C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1AE9E200)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_GLOBALINDEX_OFFSET UNITYSDK_OFFSET(0x1AE9E510)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1AE9E4F0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISOPTIONALVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1AE9E520)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x1AE80F50)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1AE9E1E0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_TYPEDATA_OFFSET UNITYSDK_OFFSET(0x1AE9E4D0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE9E190)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMember_TypeDefinitionIndex = 2036;

	class XmlTypeMapMember : public ::System::Object
	{
	public:
		::System::Object* _defaultValue; // 0x10
		::System::Reflection::MemberInfo* _specifiedMember; // 0x18
		::System::Reflection::MethodInfo* _shouldSerialize; // 0x20
		::System::Xml::Serialization::TypeData* _typeData; // 0x28
		::System::Reflection::MemberInfo* _member; // 0x30
		::System::String* _name; // 0x38
		::System::Int32 _index; // 0x40
		::System::Int32 _globalIndex; // 0x44
		::System::Int32 _specifiedGlobalIndex; // 0x48
		::System::Int32 _flags; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_NAME_OFFSET))(this, a1);
		}

		::System::Object* get_DefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Void set_DefaultValue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_DEFAULTVALUE_OFFSET))(this, a1);
		}

		::System::Boolean IsReadOnly(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_ISREADONLY_OFFSET))(this, a1);
		}

		static ::System::Object* GetValue(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_OFFSET))(a1, a2);
		}

		::System::Object* GetValue_1(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_1_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_OFFSET))(this, a1, a2);
		}

		static ::System::Void SetValue_1(::System::Object* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_1_OFFSET))(a1, a2, a3);
		}

		::System::Void InitMember(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_INITMEMBER_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::TypeData* get_TypeData()
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_TYPEDATA_OFFSET))(this);
		}

		::System::Void set_TypeData(::System::Xml::Serialization::TypeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_TYPEDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_GlobalIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_GLOBALINDEX_OFFSET))(this);
		}

		::System::Void set_GlobalIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_GLOBALINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOptionalValueType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISOPTIONALVALUETYPE_OFFSET))(this);
		}

		::System::Void set_IsOptionalValueType(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISOPTIONALVALUETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReturnValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISRETURNVALUE_OFFSET))(this);
		}

		::System::Void set_IsReturnValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISRETURNVALUE_OFFSET))(this, a1);
		}

		::System::Void CheckOptionalValueType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_CHECKOPTIONALVALUETYPE_OFFSET))(this, a1);
		}

		::System::Boolean GetValueSpecified(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUESPECIFIED_OFFSET))(this, a1);
		}

		::System::Void SetValueSpecified(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUESPECIFIED_OFFSET))(this, a1, a2);
		}
	};
}
