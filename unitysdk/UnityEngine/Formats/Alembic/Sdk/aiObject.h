#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASCAMERA_OFFSET UNITYSDK_OFFSET(0x22D9080)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASCURVES_OFFSET UNITYSDK_OFFSET(0x22D9180)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASPOINTS_OFFSET UNITYSDK_OFFSET(0x22D9100)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASPOLYMESH_OFFSET UNITYSDK_OFFSET(0x22D9200)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASSUBD_OFFSET UNITYSDK_OFFSET(0x22D9280)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_ASXFORM_OFFSET UNITYSDK_OFFSET(0x22D9000)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_EACHCHILD_OFFSET UNITYSDK_OFFSET(0x22D9300)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GETCHILD_OFFSET UNITYSDK_OFFSET(0x22D8F70)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x22D8EF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x22D8C10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x22D8D40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x22D8C90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x22D8DF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A1D7560)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_SETENABLED_OFFSET UNITYSDK_OFFSET(0x22D8E70)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiObject_TypeDefinitionIndex = 40818;

	struct alignas(8) aiObject
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiObject v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiObject))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_OP_IMPLICIT_OFFSET))(v);
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

		::System::Void SetEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_SETENABLED_OFFSET))(this, value);
		}

		::System::Int32 get_childCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GET_CHILDCOUNT_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiObject GetChild(::System::Int32 i)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_GETCHILD_OFFSET))(this, i);
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

		::System::Void EachChild(::System::Action_1<::UnityEngine::Formats::Alembic::Sdk::aiObject>* act)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Formats::Alembic::Sdk::aiObject>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIOBJECT_EACHCHILD_OFFSET))(this, act);
		}
	};
}
