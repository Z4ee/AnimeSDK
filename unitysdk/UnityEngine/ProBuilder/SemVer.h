#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_SEMVER_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1EBA5210)
#define UNITYENGINE_PROBUILDER_SEMVER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1EBA51B0)
#define UNITYENGINE_PROBUILDER_SEMVER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBA4E90)
#define UNITYENGINE_PROBUILDER_SEMVER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBA4E30)
#define UNITYENGINE_PROBUILDER_SEMVER_GETBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x1EBA5B00)
#define UNITYENGINE_PROBUILDER_SEMVER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBA4FE0)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_BUILD_OFFSET UNITYSDK_OFFSET(0x1EBA47F0)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_DATE_OFFSET UNITYSDK_OFFSET(0x1EBA4840)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_MAJORMINORPATCH_OFFSET UNITYSDK_OFFSET(0x1EBA4860)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_MAJOR_OFFSET UNITYSDK_OFFSET(0x1EBA47C0)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_METADATA_OFFSET UNITYSDK_OFFSET(0x1EBA4820)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_MINOR_OFFSET UNITYSDK_OFFSET(0x1EBA47D0)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_PATCH_OFFSET UNITYSDK_OFFSET(0x1EBA47E0)
#define UNITYENGINE_PROBUILDER_SEMVER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EBA4800)
#define UNITYENGINE_PROBUILDER_SEMVER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EBA4E10)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EBA5320)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1EBA5400)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1EBA53A0)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EBA5340)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1EBA53C0)
#define UNITYENGINE_PROBUILDER_SEMVER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1EBA5370)
#define UNITYENGINE_PROBUILDER_SEMVER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1EBA5980)
#define UNITYENGINE_PROBUILDER_SEMVER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBA5440)
#define UNITYENGINE_PROBUILDER_SEMVER_TRYGETVERSIONINFO_OFFSET UNITYSDK_OFFSET(0x1EBA4990)
#define UNITYENGINE_PROBUILDER_SEMVER_WRAPNOVALUE_OFFSET UNITYSDK_OFFSET(0x1EBA5310)
#define UNITYENGINE_PROBUILDER_SEMVER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBA4910)
#define UNITYENGINE_PROBUILDER_SEMVER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EBA48C0)
#define UNITYENGINE_PROBUILDER_SEMVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA48F0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SemVer_TypeDefinitionIndex = 43236;

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

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String* a5, ::System::String* a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::UnityEngine::ProBuilder::SemVer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_COMPARETO_OFFSET))(this, a1);
		}

		static ::System::Int32 WrapNoValue(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_WRAPNOVALUE_OFFSET))(a1);
		}

		::System::Int32 CompareTo_1(::UnityEngine::ProBuilder::SemVer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_COMPARETO_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::SemVer* a1, ::UnityEngine::ProBuilder::SemVer* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::SemVer* a1, ::UnityEngine::ProBuilder::SemVer* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::UnityEngine::ProBuilder::SemVer* a1, ::UnityEngine::ProBuilder::SemVer* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::UnityEngine::ProBuilder::SemVer* a1, ::UnityEngine::ProBuilder::SemVer* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::UnityEngine::ProBuilder::SemVer* a1, ::UnityEngine::ProBuilder::SemVer* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::UnityEngine::ProBuilder::SemVer* a1, ::UnityEngine::ProBuilder::SemVer* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SemVer*, ::UnityEngine::ProBuilder::SemVer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		::System::String* ToString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_TOSTRING_1_OFFSET))(this);
		}

		static ::System::Boolean TryGetVersionInfo(::System::String* a1, ::UnityEngine::ProBuilder::SemVer*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::ProBuilder::SemVer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_TRYGETVERSIONINFO_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetBuildNumber(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SEMVER_GETBUILDNUMBER_OFFSET))(a1);
		}
	};
}
