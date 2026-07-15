#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Version_VersionResult.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_VERSION_APPENDPOSITIVENUMBER_OFFSET UNITYSDK_OFFSET(0x1D202E70)
#define SYSTEM_VERSION_CLONE_OFFSET UNITYSDK_OFFSET(0x1D202020)
#define SYSTEM_VERSION_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1D2021C0)
#define SYSTEM_VERSION_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D202050)
#define SYSTEM_VERSION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D2022E0)
#define SYSTEM_VERSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D202250)
#define SYSTEM_VERSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D202360)
#define SYSTEM_VERSION_GET_BUILD_OFFSET UNITYSDK_OFFSET(0x1D202000)
#define SYSTEM_VERSION_GET_MAJOR_OFFSET UNITYSDK_OFFSET(0x1D201FE0)
#define SYSTEM_VERSION_GET_MINOR_OFFSET UNITYSDK_OFFSET(0x1D201FF0)
#define SYSTEM_VERSION_GET_REVISION_OFFSET UNITYSDK_OFFSET(0x1D202010)
#define SYSTEM_VERSION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D202140)
#define SYSTEM_VERSION_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1D2039F0)
#define SYSTEM_VERSION_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1D2039B0)
#define SYSTEM_VERSION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D203790)
#define SYSTEM_VERSION_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1D2038F0)
#define SYSTEM_VERSION_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1D203830)
#define SYSTEM_VERSION_PARSE_OFFSET UNITYSDK_OFFSET(0x1D201F00)
#define SYSTEM_VERSION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D2023C0)
#define SYSTEM_VERSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D202390)
#define SYSTEM_VERSION_TRYPARSECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D203610)
#define SYSTEM_VERSION_TRYPARSEVERSION_OFFSET UNITYSDK_OFFSET(0x1D202F00)
#define SYSTEM_VERSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D203A30)
#define SYSTEM_VERSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D201CE0)
#define SYSTEM_VERSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D201E00)
#define SYSTEM_VERSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D201EA0)
#define SYSTEM_VERSION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D201FD0)
#define SYSTEM_VERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D201BB0)

namespace System
{
	inline static constexpr unsigned int Version_TypeDefinitionIndex = 361;

	class Version : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_SeparatorsArray()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Version_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		// static const ::System::Int32 ZERO_CHAR_VALUE = 0x30; // 0x0
		::System::Int32 _Minor; // 0x10
		::System::Int32 _Revision; // 0x14
		::System::Int32 _Major; // 0x18
		::System::Int32 _Build; // 0x1C

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION__CTOR_3_OFFSET))(this, a1);
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

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::System::Version* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_COMPARETO_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Version* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TOSTRING_1_OFFSET))(this, a1);
		}

		static ::System::Void AppendPositiveNumber(::System::Int32 a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_APPENDPOSITIVENUMBER_OFFSET))(a1, a2);
		}

		static ::System::Version* Parse(::System::String* a1)
		{
			return ((::System::Version*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_PARSE_OFFSET))(a1);
		}

		static ::System::Boolean TryParseVersion(::System::String* a1, ::System::Version_VersionResult& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Version_VersionResult&))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TRYPARSEVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseComponent(::System::String* a1, ::System::String* a2, ::System::Version_VersionResult& a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Version_VersionResult&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TRYPARSECOMPONENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean op_Equality(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}
	};
}
