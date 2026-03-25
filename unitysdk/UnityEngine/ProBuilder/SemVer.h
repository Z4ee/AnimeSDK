#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_SEMVER_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1888DFB0)
#define UNITYENGINE_PROBUILDER_SEMVER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1888DF50)
#define UNITYENGINE_PROBUILDER_SEMVER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1888DC40)
#define UNITYENGINE_PROBUILDER_SEMVER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1888DBE0)
#define UNITYENGINE_PROBUILDER_SEMVER_GETBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x1888E690)
#define UNITYENGINE_PROBUILDER_SEMVER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1888DD80)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_BUILD_OFFSET UNITYSDK_OFFSET(0x1888D500)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_DATE_OFFSET UNITYSDK_OFFSET(0x1888D550)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_MAJORMINORPATCH_OFFSET UNITYSDK_OFFSET(0x1888D570)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_MAJOR_OFFSET UNITYSDK_OFFSET(0x1888D4D0)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_METADATA_OFFSET UNITYSDK_OFFSET(0x1888D530)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_MINOR_OFFSET UNITYSDK_OFFSET(0x1888D4E0)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_PATCH_OFFSET UNITYSDK_OFFSET(0x1888D4F0)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1888D510)
#define UNITYENGINE_PROBUILDER_SEMVER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1888DBC0)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1888E0C0)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1888E1A0)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1888E140)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1888E0E0)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1888E160)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1888E110)
#define UNITYENGINE_PROBUILDER_SEMVER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1888E510)
#define UNITYENGINE_PROBUILDER_SEMVER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1888E1E0)
#define UNITYENGINE_PROBUILDER_SEMVER_TRYGETVERSIONINFO_OFFSET UNITYSDK_OFFSET(0x1888D6A0)
#define UNITYENGINE_PROBUILDER_SEMVER_WRAPNOVALUE_OFFSET UNITYSDK_OFFSET(0x1888E0B0)
#define UNITYENGINE_PROBUILDER_SEMVER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1888D620)
#define UNITYENGINE_PROBUILDER_SEMVER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1888D5D0)
#define UNITYENGINE_PROBUILDER_SEMVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1888D600)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SemVer_TypeDefinitionIndex = 34164;

	class SemVer : public ::System::Object
	{
	public:
		// static const ::System::String* DefaultStringFormat; // 0x0
		::System::Int32 m_Major; // 0x10
		::System::Int32 m_Minor; // 0x14
		::System::Int32 m_Patch; // 0x18
		::System::Int32 m_Build; // 0x1C
		::System::String* m_Type; // 0x20
		::System::String* m_Metadata; // 0x28
		::System::String* m_Date; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* formatted, ::System::String* date)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER__CTOR_1_OFFSET))(this, formatted, date);
		}

		::System::Void _ctor_2(::System::Int32 major, ::System::Int32 minor, ::System::Int32 patch, ::System::Int32 build, ::System::String* type, ::System::String* date, ::System::String* metadata)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER__CTOR_2_OFFSET))(this, major, minor, patch, build, type, date, metadata);
		}

		::System::Int32 get_major()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GET_MAJOR_OFFSET))(this);
		}

		::System::Int32 get_minor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GET_MINOR_OFFSET))(this);
		}

		::System::Int32 get_patch()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GET_PATCH_OFFSET))(this);
		}

		::System::Int32 get_build()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GET_BUILD_OFFSET))(this);
		}

		::System::String* get_type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_metadata()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GET_METADATA_OFFSET))(this);
		}

		::System::String* get_date()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GET_DATE_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::SemVer* get_MajorMinorPatch()
		{
			return ((::UnityEngine::ProBuilder::SemVer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GET_MAJORMINORPATCH_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::UnityEngine::ProBuilder::SemVer* version)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_EQUALS_1_OFFSET))(this, version);
		}

		::System::Int32 CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_COMPARETO_OFFSET))(this, obj);
		}

		static ::System::Int32 WrapNoValue(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_WRAPNOVALUE_OFFSET))(value);
		}

		::System::Int32 CompareTo_1(::UnityEngine::ProBuilder::SemVer* version)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_COMPARETO_1_OFFSET))(this, version);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_LESSTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_GREATERTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_LESSTHANOREQUAL_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_GREATERTHANOREQUAL_OFFSET))(left, right);
		}

		::System::String* ToString(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_TOSTRING_OFFSET))(this, format);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_TOSTRING_1_OFFSET))(this);
		}

		static ::System::Boolean TryGetVersionInfo(::System::String* input, ::UnityEngine::ProBuilder::SemVer*& version)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::ProBuilder::SemVer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_TRYGETVERSIONINFO_OFFSET))(input, version);
		}

		static ::System::Int32 GetBuildNumber(::System::String* input)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GETBUILDNUMBER_OFFSET))(input);
		}
	};
}
