#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Version_VersionResult.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_VERSION_APPENDPOSITIVENUMBER_OFFSET UNITYSDK_OFFSET(0x178A27E0)
#define SYSTEM_VERSION_CLONE_OFFSET UNITYSDK_OFFSET(0x178A1CA0)
#define SYSTEM_VERSION_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x178A1E40)
#define SYSTEM_VERSION_COMPARETO_OFFSET UNITYSDK_OFFSET(0x178A1CD0)
#define SYSTEM_VERSION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x178A1F60)
#define SYSTEM_VERSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x178A1ED0)
#define SYSTEM_VERSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x178A1FE0)
#define SYSTEM_VERSION_GET_BUILD_OFFSET UNITYSDK_OFFSET(0x178A1C80)
#define SYSTEM_VERSION_GET_MAJOR_OFFSET UNITYSDK_OFFSET(0x178A1C60)
#define SYSTEM_VERSION_GET_MINOR_OFFSET UNITYSDK_OFFSET(0x178A1C70)
#define SYSTEM_VERSION_GET_REVISION_OFFSET UNITYSDK_OFFSET(0x178A1C90)
#define SYSTEM_VERSION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x178A1DC0)
#define SYSTEM_VERSION_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x178A3360)
#define SYSTEM_VERSION_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x178A3320)
#define SYSTEM_VERSION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x178A3100)
#define SYSTEM_VERSION_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x178A3260)
#define SYSTEM_VERSION_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x178A31A0)
#define SYSTEM_VERSION_PARSE_OFFSET UNITYSDK_OFFSET(0x178A1B80)
#define SYSTEM_VERSION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x178A2040)
#define SYSTEM_VERSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178A2010)
#define SYSTEM_VERSION_TRYPARSECOMPONENT_OFFSET UNITYSDK_OFFSET(0x178A2F80)
#define SYSTEM_VERSION_TRYPARSEVERSION_OFFSET UNITYSDK_OFFSET(0x178A2870)
#define SYSTEM_VERSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x178A33A0)
#define SYSTEM_VERSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178A1960)
#define SYSTEM_VERSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x178A1A80)
#define SYSTEM_VERSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x178A1B20)
#define SYSTEM_VERSION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x178A1C50)
#define SYSTEM_VERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x178A1830)

namespace System
{
	inline static constexpr unsigned int Version_TypeDefinitionIndex = 362;

	class Version : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_SeparatorsArray()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Version_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		// static const ::System::Int32 ZERO_CHAR_VALUE = 0x30; // 0x0
		::System::Int32 _Build; // 0x10
		::System::Int32 _Minor; // 0x14
		::System::Int32 _Major; // 0x18
		::System::Int32 _Revision; // 0x1C

		::System::Void _ctor(::System::Int32 major, ::System::Int32 minor, ::System::Int32 build, ::System::Int32 revision)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION__CTOR_OFFSET))(this, major, minor, build, revision);
		}

		::System::Void _ctor_1(::System::Int32 major, ::System::Int32 minor, ::System::Int32 build)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION__CTOR_1_OFFSET))(this, major, minor, build);
		}

		::System::Void _ctor_2(::System::Int32 major, ::System::Int32 minor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION__CTOR_2_OFFSET))(this, major, minor);
		}

		::System::Void _ctor_3(::System::String* version)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION__CTOR_3_OFFSET))(this, version);
		}

		::System::Void _ctor_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION__CTOR_4_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_VERSION__CCTOR_OFFSET))();
		}

		::System::Int32 get_Major()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_MAJOR_OFFSET))(this);
		}

		::System::Int32 get_Minor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_MINOR_OFFSET))(this);
		}

		::System::Int32 get_Build()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_BUILD_OFFSET))(this);
		}

		::System::Int32 get_Revision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_REVISION_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_CLONE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* version)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_COMPARETO_OFFSET))(this, version);
		}

		::System::Int32 CompareTo_1(::System::Version* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Version* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 fieldCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TOSTRING_1_OFFSET))(this, fieldCount);
		}

		static ::System::Void AppendPositiveNumber(::System::Int32 num, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_APPENDPOSITIVENUMBER_OFFSET))(num, sb);
		}

		static ::System::Version* Parse(::System::String* input)
		{
			return ((::System::Version*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_PARSE_OFFSET))(input);
		}

		static ::System::Boolean TryParseVersion(::System::String* version, ::System::Version_VersionResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Version_VersionResult&))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TRYPARSEVERSION_OFFSET))(version, result);
		}

		static ::System::Boolean TryParseComponent(::System::String* component, ::System::String* componentName, ::System::Version_VersionResult& result, ::System::Int32& parsedComponent)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Version_VersionResult&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TRYPARSECOMPONENT_OFFSET))(component, componentName, result, parsedComponent);
		}

		static ::System::Boolean op_Equality(::System::Version* v1, ::System::Version* v2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_EQUALITY_OFFSET))(v1, v2);
		}

		static ::System::Boolean op_Inequality(::System::Version* v1, ::System::Version* v2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_INEQUALITY_OFFSET))(v1, v2);
		}

		static ::System::Boolean op_LessThan(::System::Version* v1, ::System::Version* v2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_LESSTHAN_OFFSET))(v1, v2);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::Version* v1, ::System::Version* v2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_LESSTHANOREQUAL_OFFSET))(v1, v2);
		}

		static ::System::Boolean op_GreaterThan(::System::Version* v1, ::System::Version* v2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_GREATERTHAN_OFFSET))(v1, v2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::Version* v1, ::System::Version* v2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_GREATERTHANOREQUAL_OFFSET))(v1, v2);
		}
	};
}
