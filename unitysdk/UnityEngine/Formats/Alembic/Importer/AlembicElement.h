#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicTreeNode; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_ABCPREPARESAMPLE_OFFSET UNITYSDK_OFFSET(0x1B031D20)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_ABCSETUP_OFFSET UNITYSDK_OFFSET(0x1B031D10)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_ABCSYNCDATABEGIN_OFFSET UNITYSDK_OFFSET(0x1B031D30)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_ABCSYNCDATAEND_OFFSET UNITYSDK_OFFSET(0x1B031D40)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B031C80)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B031C40)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_GETORADDCAMERA_OFFSET UNITYSDK_OFFSET(0x1B02E7B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_GET_ABCOBJECT_OFFSET UNITYSDK_OFFSET(0x1B031C30)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_GET_ABCTREENODE_OFFSET UNITYSDK_OFFSET(0x1B031C10)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1B031C00)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_SET_ABCTREENODE_OFFSET UNITYSDK_OFFSET(0x1B031C20)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1B031BF0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B02EE90)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicElement_TypeDefinitionIndex = 41672;

	class AlembicElement : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* _abcTreeNode_k__BackingField; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::aiObject m_abcObj; // 0x18
		::System::Boolean _disposed_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void set_disposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_SET_DISPOSED_OFFSET))(this, a1);
		}

		::System::Boolean get_disposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_GET_DISPOSED_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* get_abcTreeNode()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_GET_ABCTREENODE_OFFSET))(this);
		}

		::System::Void set_abcTreeNode(::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_SET_ABCTREENODE_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiObject get_abcObject()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_GET_ABCOBJECT_OFFSET))(this);
		}

		::UnityEngine::Camera* GetOrAddCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_GETORADDCAMERA_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_DISPOSE_1_OFFSET))(this);
		}

		::System::Void AbcSetup(::UnityEngine::Formats::Alembic::Sdk::aiObject a1, ::UnityEngine::Formats::Alembic::Sdk::aiSchema a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject, ::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_ABCSETUP_OFFSET))(this, a1, a2);
		}

		::System::Void AbcPrepareSample()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_ABCPREPARESAMPLE_OFFSET))(this);
		}

		::System::Void AbcSyncDataBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_ABCSYNCDATABEGIN_OFFSET))(this);
		}

		::System::Void AbcSyncDataEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICELEMENT_ABCSYNCDATAEND_OFFSET))(this);
		}
	};
}
