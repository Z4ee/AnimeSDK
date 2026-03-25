#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/CameraData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeContext.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aePointsData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aePolyMeshData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeProperty.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aePropertyType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeXformData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCamera.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiConfig.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiContext.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCurves.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCurvesSampleSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCurvesSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiMeshSampleSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiMeshSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPoints.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPointsSampleSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPointsSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPolyMesh.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiProperty.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPropertyData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPropertyType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSample.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSampleSelector.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSubD.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiTimeSampling.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiXform.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiXformData.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine::Formats::Alembic::Sdk { class AlembicExportOptions; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEADDTIMESAMPLING_OFFSET UNITYSDK_OFFSET(0x187A3730)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEADDTIME_OFFSET UNITYSDK_OFFSET(0x187A37C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEAPPLYMATRIXP_OFFSET UNITYSDK_OFFSET(0x187A4490)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEAPPLYMATRIXV_OFFSET UNITYSDK_OFFSET(0x187A4520)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AECAMERAWRITESAMPLE_OFFSET UNITYSDK_OFFSET(0x187A3C90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AECREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x187A3340)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEDESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x187A33C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEGENERATEREMAPINDICES_OFFSET UNITYSDK_OFFSET(0x187A43F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEGETTOPOBJECT_OFFSET UNITYSDK_OFFSET(0x187A36B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFORCEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x187A3F60)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFRAMEBEGIN_OFFSET UNITYSDK_OFFSET(0x187A3850)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFRAMEEND_OFFSET UNITYSDK_OFFSET(0x187A38D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWCAMERA_OFFSET UNITYSDK_OFFSET(0x187A3A00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPOINTS_OFFSET UNITYSDK_OFFSET(0x187A3AB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPOLYMESH_OFFSET UNITYSDK_OFFSET(0x187A3B60)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPROPERTY_OFFSET UNITYSDK_OFFSET(0x187A3EB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWXFORM_OFFSET UNITYSDK_OFFSET(0x187A3950)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEOPENARCHIVE_OFFSET UNITYSDK_OFFSET(0x187A3610)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOINTSWRITESAMPLE_OFFSET UNITYSDK_OFFSET(0x187A3E30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOLYMESHADDFACESET_OFFSET UNITYSDK_OFFSET(0x187A3D90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOLYMESHWRITESAMPLE_OFFSET UNITYSDK_OFFSET(0x187A3D10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITEARRAYSAMPLE_OFFSET UNITYSDK_OFFSET(0x187A3FE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_1_OFFSET UNITYSDK_OFFSET(0x187A40F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_2_OFFSET UNITYSDK_OFFSET(0x187A4170)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_3_OFFSET UNITYSDK_OFFSET(0x187A41F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_4_OFFSET UNITYSDK_OFFSET(0x187A4270)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_5_OFFSET UNITYSDK_OFFSET(0x187A42F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_6_OFFSET UNITYSDK_OFFSET(0x187A4370)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_OFFSET UNITYSDK_OFFSET(0x187A4070)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AESETCONFIG_OFFSET UNITYSDK_OFFSET(0x187A3540)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEXFORMWRITESAMPLE_OFFSET UNITYSDK_OFFSET(0x187A3C10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICAMERAGETDATA_OFFSET UNITYSDK_OFFSET(0x187A5B00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICLEANUP_OFFSET UNITYSDK_OFFSET(0x187A17F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICLEARCONTEXTSWITHPATH_OFFSET UNITYSDK_OFFSET(0x187A45B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTCREATE_OFFSET UNITYSDK_OFFSET(0x187A4650)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTDESTROY_OFFSET UNITYSDK_OFFSET(0x187A46D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETAPPLICATION_OFFSET UNITYSDK_OFFSET(0x187A34C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETISHDF5_OFFSET UNITYSDK_OFFSET(0x187A3440)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMERANGE_OFFSET UNITYSDK_OFFSET(0x187A4980)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMESAMPLINGCOUNT_OFFSET UNITYSDK_OFFSET(0x187A4870)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMESAMPLING_OFFSET UNITYSDK_OFFSET(0x187A48F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTOPOBJECT_OFFSET UNITYSDK_OFFSET(0x187A4A10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTLOAD_OFFSET UNITYSDK_OFFSET(0x187A4750)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTSETCONFIG_OFFSET UNITYSDK_OFFSET(0x187A47F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTUPDATESAMPLES_OFFSET UNITYSDK_OFFSET(0x187A4A90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESFILLDATA_OFFSET UNITYSDK_OFFSET(0x187A5F20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESGETSAMPLESUMMARY_OFFSET UNITYSDK_OFFSET(0x187A5EA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESGETSUMMARY_OFFSET UNITYSDK_OFFSET(0x187A5A00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASCAMERA_OFFSET UNITYSDK_OFFSET(0x187A50C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASCURVES_OFFSET UNITYSDK_OFFSET(0x187A51C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASPOINTS_OFFSET UNITYSDK_OFFSET(0x187A5140)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASPOLYMESH_OFFSET UNITYSDK_OFFSET(0x187A5240)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASSUBD_OFFSET UNITYSDK_OFFSET(0x187A52C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASXFORM_OFFSET UNITYSDK_OFFSET(0x187A5040)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETCHILD_OFFSET UNITYSDK_OFFSET(0x187A4DB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x187A4CB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETFULLNAME_OFFSET UNITYSDK_OFFSET(0x187A4FC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETNAME_OFFSET UNITYSDK_OFFSET(0x187A4F40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETNUMCHILDREN_OFFSET UNITYSDK_OFFSET(0x187A4D30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETPARENT_OFFSET UNITYSDK_OFFSET(0x187A4E40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTSETENABLED_OFFSET UNITYSDK_OFFSET(0x187A4EC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSFILLDATA_OFFSET UNITYSDK_OFFSET(0x187A5E20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSGETSAMPLESUMMARY_OFFSET UNITYSDK_OFFSET(0x187A5DA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSGETSUMMARY_OFFSET UNITYSDK_OFFSET(0x187A5980)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSSETSORTBASEPOSITION_OFFSET UNITYSDK_OFFSET(0x187A58F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSSETSORT_OFFSET UNITYSDK_OFFSET(0x187A5870)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHFILLVERTEXBUFFER_OFFSET UNITYSDK_OFFSET(0x187A5D10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSAMPLESUMMARY_OFFSET UNITYSDK_OFFSET(0x187A5B80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSPLITSUMMARIES_OFFSET UNITYSDK_OFFSET(0x187A5C00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSUBMESHSUMMARIES_OFFSET UNITYSDK_OFFSET(0x187A5C90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSUMMARY_OFFSET UNITYSDK_OFFSET(0x187A5770)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETDATA_OFFSET UNITYSDK_OFFSET(0x187A60A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETNAME_OFFSET UNITYSDK_OFFSET(0x187A5FA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETTYPE_OFFSET UNITYSDK_OFFSET(0x187A6020)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETNUMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x187A55C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETPROPERTYBYINDEX_OFFSET UNITYSDK_OFFSET(0x187A5640)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETPROPERTYBYNAME_OFFSET UNITYSDK_OFFSET(0x187A56D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x187A5440)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAISCONSTANT_OFFSET UNITYSDK_OFFSET(0x187A54C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAISDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x187A5540)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMASYNC_OFFSET UNITYSDK_OFFSET(0x187A53C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAUPDATESAMPLE_OFFSET UNITYSDK_OFFSET(0x187A5340)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISUBDGETSUMMARY_OFFSET UNITYSDK_OFFSET(0x187A57F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETRANGE_OFFSET UNITYSDK_OFFSET(0x187A4C20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x187A4B20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETTIME_OFFSET UNITYSDK_OFFSET(0x187A4BA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMETOSAMPLESELECTOR_OFFSET UNITYSDK_OFFSET(0x1879D6A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIXFORMGETDATA_OFFSET UNITYSDK_OFFSET(0x187A5A80)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int NativeMethods_TypeDefinitionIndex = 34958;

	class NativeMethods : public ::System::Object
	{
	public:
		static ::UnityEngine::Formats::Alembic::Sdk::aeContext aeCreateContext()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeContext(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AECREATECONTEXT_OFFSET))();
		}

		static ::System::Void aeDestroyContext(::System::IntPtr ctx)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEDESTROYCONTEXT_OFFSET))(ctx);
		}

		static ::System::Boolean aiContextGetIsHDF5(::System::IntPtr ctx)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETISHDF5_OFFSET))(ctx);
		}

		static ::System::IntPtr aiContextGetApplication(::System::IntPtr ctx)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETAPPLICATION_OFFSET))(ctx);
		}

		static ::System::Void aeSetConfig(::System::IntPtr ctx, ::UnityEngine::Formats::Alembic::Sdk::AlembicExportOptions* conf)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::AlembicExportOptions*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AESETCONFIG_OFFSET))(ctx, conf);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool aeOpenArchive(::System::IntPtr ctx, ::System::String* path)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEOPENARCHIVE_OFFSET))(ctx, path);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeObject aeGetTopObject(::System::IntPtr ctx)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEGETTOPOBJECT_OFFSET))(ctx);
		}

		static ::System::Int32 aeAddTimeSampling(::System::IntPtr ctx, ::System::Single start_time)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEADDTIMESAMPLING_OFFSET))(ctx, start_time);
		}

		static ::System::Void aeAddTime(::System::IntPtr ctx, ::System::Single time, ::System::Int32 tsi)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEADDTIME_OFFSET))(ctx, time, tsi);
		}

		static ::System::Void aeMarkFrameBegin(::System::IntPtr ctx)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFRAMEBEGIN_OFFSET))(ctx);
		}

		static ::System::Void aeMarkFrameEnd(::System::IntPtr ctx)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFRAMEEND_OFFSET))(ctx);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeObject aeNewXform(::System::IntPtr self, ::System::String* name, ::System::Int32 tsi)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWXFORM_OFFSET))(self, name, tsi);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeObject aeNewCamera(::System::IntPtr self, ::System::String* name, ::System::Int32 tsi)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWCAMERA_OFFSET))(self, name, tsi);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeObject aeNewPoints(::System::IntPtr self, ::System::String* name, ::System::Int32 tsi)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPOINTS_OFFSET))(self, name, tsi);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeObject aeNewPolyMesh(::System::IntPtr self, ::System::String* name, ::System::Int32 tsi)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPOLYMESH_OFFSET))(self, name, tsi);
		}

		static ::System::Void aeXformWriteSample(::System::IntPtr self, ::UnityEngine::Formats::Alembic::Sdk::aeXformData& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aeXformData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEXFORMWRITESAMPLE_OFFSET))(self, data);
		}

		static ::System::Void aeCameraWriteSample(::System::IntPtr self, ::UnityEngine::Formats::Alembic::Sdk::CameraData& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AECAMERAWRITESAMPLE_OFFSET))(self, data);
		}

		static ::System::Void aePolyMeshWriteSample(::System::IntPtr self, ::UnityEngine::Formats::Alembic::Sdk::aePolyMeshData& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aePolyMeshData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOLYMESHWRITESAMPLE_OFFSET))(self, data);
		}

		static ::System::Int32 aePolyMeshAddFaceSet(::System::IntPtr self, ::System::String* name)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOLYMESHADDFACESET_OFFSET))(self, name);
		}

		static ::System::Void aePointsWriteSample(::System::IntPtr self, ::UnityEngine::Formats::Alembic::Sdk::aePointsData& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aePointsData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOINTSWRITESAMPLE_OFFSET))(self, data);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeProperty aeNewProperty(::System::IntPtr self, ::System::String* name, ::UnityEngine::Formats::Alembic::Sdk::aePropertyType type)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeProperty(*)(::System::IntPtr, ::System::String*, ::UnityEngine::Formats::Alembic::Sdk::aePropertyType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPROPERTY_OFFSET))(self, name, type);
		}

		static ::System::Void aeMarkForceInvisible(::System::IntPtr self)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFORCEINVISIBLE_OFFSET))(self);
		}

		static ::System::Void aePropertyWriteArraySample(::System::IntPtr self, ::System::IntPtr data, ::System::Int32 num_data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITEARRAYSAMPLE_OFFSET))(self, data, num_data);
		}

		static ::System::Void aePropertyWriteScalarSample(::System::IntPtr self, ::System::Single& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_OFFSET))(self, data);
		}

		static ::System::Void aePropertyWriteScalarSample_1(::System::IntPtr self, ::System::Int32& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_1_OFFSET))(self, data);
		}

		static ::System::Void aePropertyWriteScalarSample_2(::System::IntPtr self, ::UnityEngine::Formats::Alembic::Sdk::Bool& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::Bool&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_2_OFFSET))(self, data);
		}

		static ::System::Void aePropertyWriteScalarSample_3(::System::IntPtr self, ::UnityEngine::Vector2& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_3_OFFSET))(self, data);
		}

		static ::System::Void aePropertyWriteScalarSample_4(::System::IntPtr self, ::UnityEngine::Vector3& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_4_OFFSET))(self, data);
		}

		static ::System::Void aePropertyWriteScalarSample_5(::System::IntPtr self, ::UnityEngine::Vector4& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_5_OFFSET))(self, data);
		}

		static ::System::Void aePropertyWriteScalarSample_6(::System::IntPtr self, ::UnityEngine::Matrix4x4& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_6_OFFSET))(self, data);
		}

		static ::System::Int32 aeGenerateRemapIndices(::System::IntPtr dstIndices, ::System::IntPtr points, ::System::IntPtr weights4, ::System::Int32 numPoints)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEGENERATEREMAPINDICES_OFFSET))(dstIndices, points, weights4, numPoints);
		}

		static ::System::Void aeApplyMatrixP(::System::IntPtr dstPoints, ::System::Int32 num, ::UnityEngine::Matrix4x4& mat)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEAPPLYMATRIXP_OFFSET))(dstPoints, num, mat);
		}

		static ::System::Void aeApplyMatrixV(::System::IntPtr dstVectors, ::System::Int32 num, ::UnityEngine::Matrix4x4& mat)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEAPPLYMATRIXV_OFFSET))(dstVectors, num, mat);
		}

		static ::System::Void aiClearContextsWithPath(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICLEARCONTEXTSWITHPATH_OFFSET))(path);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiContext aiContextCreate(::System::Int32 uid)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiContext(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTCREATE_OFFSET))(uid);
		}

		static ::System::Void aiContextDestroy(::System::IntPtr ctx)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTDESTROY_OFFSET))(ctx);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool aiContextLoad(::System::IntPtr ctx, ::System::String* path)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTLOAD_OFFSET))(ctx, path);
		}

		static ::System::Void aiContextSetConfig(::System::IntPtr ctx, ::UnityEngine::Formats::Alembic::Sdk::aiConfig& conf)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTSETCONFIG_OFFSET))(ctx, conf);
		}

		static ::System::Int32 aiContextGetTimeSamplingCount(::System::IntPtr ctx)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMESAMPLINGCOUNT_OFFSET))(ctx);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiTimeSampling aiContextGetTimeSampling(::System::IntPtr ctx, ::System::Int32 i)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiTimeSampling(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMESAMPLING_OFFSET))(ctx, i);
		}

		static ::System::Void aiContextGetTimeRange(::System::IntPtr ctx, ::System::Double& begin, ::System::Double& end)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMERANGE_OFFSET))(ctx, begin, end);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiObject aiContextGetTopObject(::System::IntPtr ctx)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTOPOBJECT_OFFSET))(ctx);
		}

		static ::System::Void aiContextUpdateSamples(::System::IntPtr ctx, ::System::Double time)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTUPDATESAMPLES_OFFSET))(ctx, time);
		}

		static ::System::Int32 aiTimeSamplingGetSampleCount(::System::IntPtr self)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETSAMPLECOUNT_OFFSET))(self);
		}

		static ::System::Double aiTimeSamplingGetTime(::System::IntPtr self, ::System::Int32 index)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETTIME_OFFSET))(self, index);
		}

		static ::System::Void aiTimeSamplingGetRange(::System::IntPtr self, ::System::Double& start, ::System::Double& end)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETRANGE_OFFSET))(self, start, end);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiContext aiObjectGetContext(::System::IntPtr obj)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiContext(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETCONTEXT_OFFSET))(obj);
		}

		static ::System::Int32 aiObjectGetNumChildren(::System::IntPtr obj)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETNUMCHILDREN_OFFSET))(obj);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiObject aiObjectGetChild(::System::IntPtr obj, ::System::Int32 i)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETCHILD_OFFSET))(obj, i);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiObject aiObjectGetParent(::System::IntPtr obj)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETPARENT_OFFSET))(obj);
		}

		static ::System::Void aiObjectSetEnabled(::System::IntPtr obj, ::UnityEngine::Formats::Alembic::Sdk::Bool v)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTSETENABLED_OFFSET))(obj, v);
		}

		static ::System::IntPtr aiObjectGetName(::System::IntPtr obj)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETNAME_OFFSET))(obj);
		}

		static ::System::IntPtr aiObjectGetFullName(::System::IntPtr obj)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETFULLNAME_OFFSET))(obj);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiXform aiObjectAsXform(::System::IntPtr obj)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiXform(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASXFORM_OFFSET))(obj);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiCamera aiObjectAsCamera(::System::IntPtr obj)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCamera(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASCAMERA_OFFSET))(obj);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiPoints aiObjectAsPoints(::System::IntPtr obj)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPoints(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASPOINTS_OFFSET))(obj);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiCurves aiObjectAsCurves(::System::IntPtr obj)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCurves(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASCURVES_OFFSET))(obj);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh aiObjectAsPolyMesh(::System::IntPtr obj)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASPOLYMESH_OFFSET))(obj);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiSubD aiObjectAsSubD(::System::IntPtr obj)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSubD(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASSUBD_OFFSET))(obj);
		}

		static ::System::Void aiSchemaUpdateSample(::System::IntPtr schema, ::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector& ss)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAUPDATESAMPLE_OFFSET))(schema, ss);
		}

		static ::System::Void aiSchemaSync(::System::IntPtr schema)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMASYNC_OFFSET))(schema);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiSample aiSchemaGetSample(::System::IntPtr schema)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETSAMPLE_OFFSET))(schema);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool aiSchemaIsConstant(::System::IntPtr schema)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAISCONSTANT_OFFSET))(schema);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool aiSchemaIsDataUpdated(::System::IntPtr schema)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAISDATAUPDATED_OFFSET))(schema);
		}

		static ::System::Int32 aiSchemaGetNumProperties(::System::IntPtr schema)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETNUMPROPERTIES_OFFSET))(schema);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiProperty aiSchemaGetPropertyByIndex(::System::IntPtr schema, ::System::Int32 i)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiProperty(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETPROPERTYBYINDEX_OFFSET))(schema, i);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiProperty aiSchemaGetPropertyByName(::System::IntPtr schema, ::System::String* name)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiProperty(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETPROPERTYBYNAME_OFFSET))(schema, name);
		}

		static ::System::Void aiPolyMeshGetSummary(::System::IntPtr schema, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary& dst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSUMMARY_OFFSET))(schema, dst);
		}

		static ::System::Void aiSubDGetSummary(::System::IntPtr schema, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary& dst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISUBDGETSUMMARY_OFFSET))(schema, dst);
		}

		static ::System::Void aiPointsSetSort(::System::IntPtr schema, ::UnityEngine::Formats::Alembic::Sdk::Bool v)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSSETSORT_OFFSET))(schema, v);
		}

		static ::System::Void aiPointsSetSortBasePosition(::System::IntPtr schema, ::UnityEngine::Vector3 v)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSSETSORTBASEPOSITION_OFFSET))(schema, v);
		}

		static ::System::Void aiPointsGetSummary(::System::IntPtr schema, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSummary& dst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSGETSUMMARY_OFFSET))(schema, dst);
		}

		static ::System::Void aiCurvesGetSummary(::System::IntPtr schema, ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSummary& dst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESGETSUMMARY_OFFSET))(schema, dst);
		}

		static ::System::Void aiXformGetData(::System::IntPtr sample, ::UnityEngine::Formats::Alembic::Sdk::aiXformData& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiXformData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIXFORMGETDATA_OFFSET))(sample, data);
		}

		static ::System::Void aiCameraGetData(::System::IntPtr sample, ::UnityEngine::Formats::Alembic::Sdk::CameraData& dst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICAMERAGETDATA_OFFSET))(sample, dst);
		}

		static ::System::Void aiPolyMeshGetSampleSummary(::System::IntPtr sample, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary& dst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSAMPLESUMMARY_OFFSET))(sample, dst);
		}

		static ::System::Int32 aiPolyMeshGetSplitSummaries(::System::IntPtr sample, ::System::IntPtr dst)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSPLITSUMMARIES_OFFSET))(sample, dst);
		}

		static ::System::Void aiPolyMeshGetSubmeshSummaries(::System::IntPtr sample, ::System::IntPtr dst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSUBMESHSUMMARIES_OFFSET))(sample, dst);
		}

		static ::System::Void aiPolyMeshFillVertexBuffer(::System::IntPtr sample, ::System::IntPtr vbs, ::System::IntPtr ibs)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHFILLVERTEXBUFFER_OFFSET))(sample, vbs, ibs);
		}

		static ::System::Void aiPointsGetSampleSummary(::System::IntPtr sample, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSampleSummary& dst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSampleSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSGETSAMPLESUMMARY_OFFSET))(sample, dst);
		}

		static ::System::Void aiPointsFillData(::System::IntPtr sample, ::System::IntPtr dst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSFILLDATA_OFFSET))(sample, dst);
		}

		static ::System::Void aiCurvesGetSampleSummary(::System::IntPtr sample, ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSampleSummary& dst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSampleSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESGETSAMPLESUMMARY_OFFSET))(sample, dst);
		}

		static ::System::Void aiCurvesFillData(::System::IntPtr sample, ::System::IntPtr dst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESFILLDATA_OFFSET))(sample, dst);
		}

		static ::System::IntPtr aiPropertyGetName(::System::IntPtr prop)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETNAME_OFFSET))(prop);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiPropertyType aiPropertyGetType(::System::IntPtr prop)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPropertyType(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETTYPE_OFFSET))(prop);
		}

		static ::System::Void aiPropertyGetData(::System::IntPtr prop, ::UnityEngine::Formats::Alembic::Sdk::aiPropertyData oData)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiPropertyData))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETDATA_OFFSET))(prop, oData);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector aiTimeToSampleSelector(::System::Double time)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMETOSAMPLESELECTOR_OFFSET))(time);
		}

		static ::System::Void aiCleanup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICLEANUP_OFFSET))();
		}
	};
}
