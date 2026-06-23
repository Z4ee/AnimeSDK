#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Version; }

#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CEDEDF0)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CEDECA0)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CEDEEE0)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1CEDE990)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1CEDE960)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_GET_PROFILE_OFFSET UNITYSDK_OFFSET(0x1CEDE980)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1CEDE970)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CEDF8E0)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CEDF9E0)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CEDF040)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CEDF060)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CEDF2D0)
#define SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDF050)

namespace System::Runtime::Versioning
{
	inline static constexpr unsigned int FrameworkName_TypeDefinitionIndex = 3122;

	class FrameworkName : public ::System::Object
	{
	public:
		// static const ::System::Char c_componentSeparator; // 0x0
		// static const ::System::Char c_keyValueSeparator; // 0x0
		// static const ::System::Char c_versionValuePrefix; // 0x0
		// static const ::System::String* c_versionKey; // 0x0
		// static const ::System::String* c_profileKey; // 0x0
		::System::String* m_fullName; // 0x10
		::System::String* m_profile; // 0x18
		::System::String* m_identifier; // 0x20
		::System::Version* m_version; // 0x28

		::System::Void _ctor(::System::String* identifier, ::System::Version* version)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME__CTOR_OFFSET))(this, identifier, version);
		}

		::System::Void _ctor_1(::System::String* identifier, ::System::Version* version, ::System::String* profile)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Version*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME__CTOR_1_OFFSET))(this, identifier, version, profile);
		}

		::System::Void _ctor_2(::System::String* frameworkName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME__CTOR_2_OFFSET))(this, frameworkName);
		}

		::System::String* get_Identifier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Version* get_Version()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_GET_VERSION_OFFSET))(this);
		}

		::System::String* get_Profile()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_GET_PROFILE_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_GET_FULLNAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Runtime::Versioning::FrameworkName* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Versioning::FrameworkName*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Runtime::Versioning::FrameworkName* left, ::System::Runtime::Versioning::FrameworkName* right)
		{
			return ((::System::Boolean(*)(::System::Runtime::Versioning::FrameworkName*, ::System::Runtime::Versioning::FrameworkName*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Runtime::Versioning::FrameworkName* left, ::System::Runtime::Versioning::FrameworkName* right)
		{
			return ((::System::Boolean(*)(::System::Runtime::Versioning::FrameworkName*, ::System::Runtime::Versioning::FrameworkName*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_FRAMEWORKNAME_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
