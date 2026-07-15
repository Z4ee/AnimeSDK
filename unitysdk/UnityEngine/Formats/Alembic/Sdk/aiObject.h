#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASCAMERA_OFFSET UNITYSDK_OFFSET(0x3A22150)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASCURVES_OFFSET UNITYSDK_OFFSET(0x3A22250)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASPOINTS_OFFSET UNITYSDK_OFFSET(0x3A221D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASPOLYMESH_OFFSET UNITYSDK_OFFSET(0x3A222D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASSUBD_OFFSET UNITYSDK_OFFSET(0x3A22350)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASXFORM_OFFSET UNITYSDK_OFFSET(0x3A220D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_EACHCHILD_OFFSET UNITYSDK_OFFSET(0x3A223D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GETCHILD_OFFSET UNITYSDK_OFFSET(0x3A22040)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x3A21FC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x3A21CE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x3A21E10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3A21D60)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x3A21EC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B192550)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_SETENABLED_OFFSET UNITYSDK_OFFSET(0x3A21F40)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiObject_TypeDefinitionIndex = 42504;

	struct alignas(8) aiObject
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiObject a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiObject))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_OP_IMPLICIT_OFFSET))(a1);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiContext get_context()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiContext(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_CONTEXT_OFFSET))(this);
		}
		*/

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_fullname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_FULLNAME_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiObject get_parent()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_PARENT_OFFSET))(this);
		}

		::System::Void SetEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_SETENABLED_OFFSET))(this, a1);
		}

		::System::Int32 get_childCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_CHILDCOUNT_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiObject GetChild(::System::Int32 a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GETCHILD_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiXform AsXform()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiXform(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASXFORM_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiCamera AsCamera()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCamera(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASCAMERA_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiPoints AsPoints()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPoints(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASPOINTS_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiCurves AsCurves()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCurves(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASCURVES_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh AsPolyMesh()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASPOLYMESH_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiSubD AsSubD()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSubD(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASSUBD_OFFSET))(this);
		}
		*/

		::System::Void EachChild(::System::Action_1<::UnityEngine::Formats::Alembic::Sdk::aiObject>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Formats::Alembic::Sdk::aiObject>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_EACHCHILD_OFFSET))(this, a1);
		}
	};
}
