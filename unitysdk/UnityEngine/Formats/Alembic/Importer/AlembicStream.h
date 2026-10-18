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

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCBEFOREUPDATESAMPLES_OFFSET UNITYSDK_OFFSET(0x1F143FB0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCBEGINSYNCDATA_OFFSET UNITYSDK_OFFSET(0x1F144150)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCENDSYNCDATA_OFFSET UNITYSDK_OFFSET(0x1F1442F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCLOAD_OFFSET UNITYSDK_OFFSET(0x1F1448B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCUPDATEBEGIN_OFFSET UNITYSDK_OFFSET(0x1F144490)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCUPDATEEND_OFFSET UNITYSDK_OFFSET(0x1F144720)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_CLEARMOTIONVECTORS_1_OFFSET UNITYSDK_OFFSET(0x1F144780)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_CLEARMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x1F144770)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_DISCONNECTSTREAMSWITHPATH_OFFSET UNITYSDK_OFFSET(0x1F143690)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F1459B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GETASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1F1455D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GETTIMERANGE_OFFSET UNITYSDK_OFFSET(0x1F143D40)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_ABCCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F143BD0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_ABCISVALID_OFFSET UNITYSDK_OFFSET(0x1F143BF0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_ABCTREEROOT_OFFSET UNITYSDK_OFFSET(0x1F143BC0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1F143C10)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GET_STREAMDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F143BB0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_IMPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F145DD0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ISHDF5_OFFSET UNITYSDK_OFFSET(0x1F143C30)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_RECONNECTSTREAMSWITHPATH_OFFSET UNITYSDK_OFFSET(0x1F143A60)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_REMAPSTREAMSWITHPATH_OFFSET UNITYSDK_OFFSET(0x1F143910)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SETVERTEXMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x1F143D30)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_UPDATEABCTREE_OFFSET UNITYSDK_OFFSET(0x1F145750)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1477E0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F143E60)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicStream_TypeDefinitionIndex = 45862;

	class AlembicStream : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicStream*>** StaticGet_s_streams()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicStream*>**)Il2CppClass::FromTypeDefinitionIndex(AlembicStream_TypeDefinitionIndex)->GetStaticField(0x177D0);
		}
		::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor* m_streamDesc; // 0x10
		::UnityEngine::Formats::Alembic::Importer::AlembicStream_ImportContext* m_importContext; // 0x18
		::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* m_abcTreeRoot; // 0x20
		::System::Double m_time; // 0x28
		::UnityEngine::Formats::Alembic::Sdk::aiConfig m_config; // 0x30
		::System::Boolean m_loaded; // 0x50
		::System::Boolean m_streamInterupted; // 0x51
		::UnityEngine::Formats::Alembic::Importer::AlembicStream_SafeContext m_context; // 0x58

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM__CCTOR_OFFSET))();
		}

		static ::System::Void DisconnectStreamsWithPath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_DISCONNECTSTREAMSWITHPATH_OFFSET))(a1);
		}

		static ::System::Void RemapStreamsWithPath(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_REMAPSTREAMSWITHPATH_OFFSET))(a1, a2);
		}

		static ::System::Void ReconnectStreamsWithPath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_RECONNECTSTREAMSWITHPATH_OFFSET))(a1);
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

		::System::Void SetVertexMotionScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SETVERTEXMOTIONSCALE_OFFSET))(this, a1);
		}

		::System::Void GetTimeRange(::System::Double& a1, ::System::Double& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GETTIMERANGE_OFFSET))(this, a1, a2);
		}

		::System::Void AbcBeforeUpdateSamples(::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCBEFOREUPDATESAMPLES_OFFSET))(this, a1);
		}

		::System::Void AbcBeginSyncData(::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCBEGINSYNCDATA_OFFSET))(this, a1);
		}

		::System::Void AbcEndSyncData(::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCENDSYNCDATA_OFFSET))(this, a1);
		}

		::System::Boolean AbcUpdateBegin(::System::Double a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCUPDATEBEGIN_OFFSET))(this, a1);
		}

		::System::Void AbcUpdateEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCUPDATEEND_OFFSET))(this);
		}

		::System::Void ClearMotionVectors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_CLEARMOTIONVECTORS_OFFSET))(this);
		}

		::System::Void ClearMotionVectors_1(::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_CLEARMOTIONVECTORS_1_OFFSET))(this, a1);
		}

		::System::Boolean AbcLoad(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_ABCLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateAbcTree(::UnityEngine::Formats::Alembic::Sdk::aiObject a1, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* a2, ::System::Double a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject, ::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*, ::System::Double, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_UPDATEABCTREE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ImportCallback(::UnityEngine::Formats::Alembic::Sdk::aiObject a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_IMPORTCALLBACK_OFFSET))(this, a1);
		}

		static ::System::Single GetAspectRatio(::UnityEngine::Formats::Alembic::Sdk::AspectRatioMode a1)
		{
			return ((::System::Single(*)(::UnityEngine::Formats::Alembic::Sdk::AspectRatioMode))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_GETASPECTRATIO_OFFSET))(a1);
		}
	};
}
