#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_UPDATEMANAGER_DOREBUILDS_OFFSET UNITYSDK_OFFSET(0x1896D940)
#define TMPRO_TMP_UPDATEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1896D310)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET UNITYSDK_OFFSET(0x1896D880)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x1896D780)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1896D680)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0x1896D580)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x1896DE90)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1896DF20)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0x1896DC20)
#define TMPRO_TMP_UPDATEMANAGER_ONCAMERAPRECULL_OFFSET UNITYSDK_OFFSET(0x1896D930)
#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET UNITYSDK_OFFSET(0x1896D830)
#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x1896D730)
#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1896D630)
#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0x189498F0)
#define TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTELEMENTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x1896DCB0)
#define TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0x18949820)
#define TMPRO_TMP_UPDATEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1896DFB0)
#define TMPRO_TMP_UPDATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1896D3D0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_UpdateManager_TypeDefinitionIndex = 34409;

	class TMP_UpdateManager : public ::System::Object
	{
	public:
		static ::TMPro::TMP_UpdateManager** StaticGet_s_Instance()
		{
			return (::TMPro::TMP_UpdateManager**)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0x2F6E0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_RegisterTextObjectForUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0xF520);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_RegisterTextElementForCullingUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0xF528);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_RegisterTextElementForGraphicRebuildMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0xF530);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_UnregisterTextElementForGraphicRebuildMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0xF538);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_UnregisterTextObjectForUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0xF540);
		}
		::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_InternalUpdateQueue; // 0x10
		::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_CullingUpdateQueue; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_CullingUpdateLookup; // 0x20
		::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_GraphicRebuildQueue; // 0x28
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_InternalUpdateLookup; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_LayoutQueueLookup; // 0x38
		::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_LayoutRebuildQueue; // 0x40
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_GraphicQueueLookup; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER__CCTOR_OFFSET))();
		}

		static ::TMPro::TMP_UpdateManager* get_instance()
		{
			return ((::TMPro::TMP_UpdateManager*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void RegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTOBJECTFORUPDATE_OFFSET))(textObject);
		}

		::System::Void InternalRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTOBJECTFORUPDATE_OFFSET))(this, textObject);
		}

		static ::System::Void RegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET))(element);
		}

		::System::Void InternalRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET))(this, element);
		}

		static ::System::Void RegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET))(element);
		}

		::System::Void InternalRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET))(this, element);
		}

		static ::System::Void RegisterTextElementForCullingUpdate(::TMPro::TMP_Text* element)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET))(element);
		}

		::System::Void InternalRegisterTextElementForCullingUpdate(::TMPro::TMP_Text* element)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET))(this, element);
		}

		::System::Void OnCameraPreCull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_ONCAMERAPRECULL_OFFSET))(this);
		}

		::System::Void DoRebuilds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_DOREBUILDS_OFFSET))(this);
		}

		static ::System::Void UnRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTOBJECTFORUPDATE_OFFSET))(textObject);
		}

		static ::System::Void UnRegisterTextElementForRebuild(::TMPro::TMP_Text* element)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTELEMENTFORREBUILD_OFFSET))(element);
		}

		::System::Void InternalUnRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET))(this, element);
		}

		::System::Void InternalUnRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET))(this, element);
		}

		::System::Void InternalUnRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTOBJECTFORUPDATE_OFFSET))(this, textObject);
		}
	};
}
