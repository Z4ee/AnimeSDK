#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Importer/AlembicStream_SafeContext.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/AspectRatioMode.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiConfig.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicStream_ImportContext; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicTreeNode; }
namespace UnityEngine::Formats::Alembic::Importer { class IStreamDescriptor; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCBEFOREUPDATESAMPLES_OFFSET UNITYSDK_OFFSET(0x1A1D5CC0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCBEGINSYNCDATA_OFFSET UNITYSDK_OFFSET(0x1A1D5E00)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCENDSYNCDATA_OFFSET UNITYSDK_OFFSET(0x1A1D5F40)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCLOAD_OFFSET UNITYSDK_OFFSET(0x1A1D64C0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCUPDATEBEGIN_OFFSET UNITYSDK_OFFSET(0x1A1D6080)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCUPDATEEND_OFFSET UNITYSDK_OFFSET(0x1A1D6310)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_CLEARMOTIONVECTORS_1_OFFSET UNITYSDK_OFFSET(0x1A1D6370)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_CLEARMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x1A1D6360)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_DISCONNECTSTREAMSWITHPATH_OFFSET UNITYSDK_OFFSET(0x1A1D54F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A1D7340)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GETASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1A1D6F70)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GETTIMERANGE_OFFSET UNITYSDK_OFFSET(0x1A1D5A50)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_ABCCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A1D58E0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_ABCISVALID_OFFSET UNITYSDK_OFFSET(0x1A1D5900)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_ABCTREEROOT_OFFSET UNITYSDK_OFFSET(0x1A1D58D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1A1D5920)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_STREAMDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A1D58C0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_IMPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A1D7760)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ISHDF5_OFFSET UNITYSDK_OFFSET(0x1A1D5940)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_RECONNECTSTREAMSWITHPATH_OFFSET UNITYSDK_OFFSET(0x1A1D57E0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_REMAPSTREAMSWITHPATH_OFFSET UNITYSDK_OFFSET(0x1A1D5700)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SETVERTEXMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x1A1D5A40)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_UPDATEABCTREE_OFFSET UNITYSDK_OFFSET(0x1A1D70F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1D8CA0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D5B70)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicStream_TypeDefinitionIndex = 40855;

	class AlembicStream : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicStream*>** StaticGet_s_streams()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicStream*>**)Il2CppClass::FromTypeDefinitionIndex(AlembicStream_TypeDefinitionIndex)->GetStaticField(0x43E80);
		}
		::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* m_abcTreeRoot; // 0x10
		::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor* m_streamDesc; // 0x18
		::UnityEngine::Formats::Alembic::Importer::AlembicStream_ImportContext* m_importContext; // 0x20
		::System::Double m_time; // 0x28
		::UnityEngine::Formats::Alembic::Sdk::aiConfig m_config; // 0x30
		::System::Boolean m_streamInterupted; // 0x50
		::System::Boolean m_loaded; // 0x51
		::UnityEngine::Formats::Alembic::Importer::AlembicStream_SafeContext m_context; // 0x58

		::System::Void _ctor(::UnityEngine::GameObject* rootGo, ::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor* streamDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM__CTOR_OFFSET))(this, rootGo, streamDesc);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM__CCTOR_OFFSET))();
		}

		static ::System::Void DisconnectStreamsWithPath(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_DISCONNECTSTREAMSWITHPATH_OFFSET))(path);
		}

		static ::System::Void RemapStreamsWithPath(::System::String* oldPath, ::System::String* newPath)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_REMAPSTREAMSWITHPATH_OFFSET))(oldPath, newPath);
		}

		static ::System::Void ReconnectStreamsWithPath(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_RECONNECTSTREAMSWITHPATH_OFFSET))(path);
		}

		::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor* get_streamDescriptor()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_STREAMDESCRIPTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* get_abcTreeRoot()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_ABCTREEROOT_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicStream_SafeContext get_abcContext()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicStream_SafeContext(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_ABCCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_abcIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_ABCISVALID_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiConfig get_config()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_CONFIG_OFFSET))(this);
		}

		::System::Boolean IsHDF5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ISHDF5_OFFSET))(this);
		}

		::System::Void SetVertexMotionScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SETVERTEXMOTIONSCALE_OFFSET))(this, value);
		}

		::System::Void GetTimeRange(::System::Double& begin, ::System::Double& end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GETTIMERANGE_OFFSET))(this, begin, end);
		}

		::System::Void AbcBeforeUpdateSamples(::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCBEFOREUPDATESAMPLES_OFFSET))(this, node);
		}

		::System::Void AbcBeginSyncData(::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCBEGINSYNCDATA_OFFSET))(this, node);
		}

		::System::Void AbcEndSyncData(::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCENDSYNCDATA_OFFSET))(this, node);
		}

		::System::Boolean AbcUpdateBegin(::System::Double time)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCUPDATEBEGIN_OFFSET))(this, time);
		}

		::System::Void AbcUpdateEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCUPDATEEND_OFFSET))(this);
		}

		::System::Void ClearMotionVectors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_CLEARMOTIONVECTORS_OFFSET))(this);
		}

		::System::Void ClearMotionVectors_1(::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_CLEARMOTIONVECTORS_1_OFFSET))(this, node);
		}

		::System::Boolean AbcLoad(::System::Boolean createMissingNodes, ::System::Boolean serializeMesh)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCLOAD_OFFSET))(this, createMissingNodes, serializeMesh);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateAbcTree(::UnityEngine::Formats::Alembic::Sdk::aiObject top, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* node, ::System::Double time, ::System::Boolean createMissingNodes, ::System::Boolean serializeMesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*, ::System::Double, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_UPDATEABCTREE_OFFSET))(this, top, node, time, createMissingNodes, serializeMesh);
		}

		::System::Void ImportCallback(::UnityEngine::Formats::Alembic::Sdk::aiObject obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_IMPORTCALLBACK_OFFSET))(this, obj);
		}

		static ::System::Single GetAspectRatio(::UnityEngine::Formats::Alembic::Sdk::AspectRatioMode mode)
		{
			return ((::System::Single(*)(::UnityEngine::Formats::Alembic::Sdk::AspectRatioMode))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GETASPECTRATIO_OFFSET))(mode);
		}
	};
}
