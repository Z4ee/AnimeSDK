#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_UPDATEMANAGER_DOREBUILDS_OFFSET UNITYSDK_OFFSET(0x13511AE0)
#define TMPRO_TMP_UPDATEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x13511350)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET UNITYSDK_OFFSET(0x135119D0)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x13511880)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x13511730)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0x135115E0)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x13512260)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x135122F0)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0x13511FF0)
#define TMPRO_TMP_UPDATEMANAGER_ONCAMERAPRECULL_OFFSET UNITYSDK_OFFSET(0x13511AD0)
#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET UNITYSDK_OFFSET(0x13511980)
#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x13511830)
#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x135116E0)
#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0x134EF640)
#define TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTELEMENTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x13512080)
#define TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0x134EF570)
#define TMPRO_TMP_UPDATEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13512380)
#define TMPRO_TMP_UPDATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x13511410)

namespace TMPro
{
	inline static constexpr unsigned int TMP_UpdateManager_TypeDefinitionIndex = 43481;

	class TMP_UpdateManager : public ::System::Object
	{
	public:
		static ::TMPro::TMP_UpdateManager** StaticGet_s_Instance()
		{
			return (::TMPro::TMP_UpdateManager**)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0xB7D0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_UnregisterTextElementForGraphicRebuildMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0x27F0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_RegisterTextObjectForUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0x27F8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_UnregisterTextObjectForUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0x2800);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_RegisterTextElementForGraphicRebuildMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0x2808);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_RegisterTextElementForCullingUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateManager_TypeDefinitionIndex)->GetStaticField(0x2810);
		}
		::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_CullingUpdateQueue; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_CullingUpdateLookup; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_LayoutQueueLookup; // 0x20
		::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_LayoutRebuildQueue; // 0x28
		::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_InternalUpdateQueue; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_InternalUpdateLookup; // 0x38
		::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_GraphicRebuildQueue; // 0x40
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

		static ::System::Void RegisterTextObjectForUpdate(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTOBJECTFORUPDATE_OFFSET))(a1);
		}

		::System::Void InternalRegisterTextObjectForUpdate(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTOBJECTFORUPDATE_OFFSET))(this, a1);
		}

		static ::System::Void RegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET))(a1);
		}

		::System::Void InternalRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET))(this, a1);
		}

		static ::System::Void RegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET))(a1);
		}

		::System::Void InternalRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET))(this, a1);
		}

		static ::System::Void RegisterTextElementForCullingUpdate(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET))(a1);
		}

		::System::Void InternalRegisterTextElementForCullingUpdate(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnCameraPreCull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_ONCAMERAPRECULL_OFFSET))(this);
		}

		::System::Void DoRebuilds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_DOREBUILDS_OFFSET))(this);
		}

		static ::System::Void UnRegisterTextObjectForUpdate(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTOBJECTFORUPDATE_OFFSET))(a1);
		}

		static ::System::Void UnRegisterTextElementForRebuild(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTELEMENTFORREBUILD_OFFSET))(a1);
		}

		::System::Void InternalUnRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET))(this, a1);
		}

		::System::Void InternalUnRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET))(this, a1);
		}

		::System::Void InternalUnRegisterTextObjectForUpdate(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTOBJECTFORUPDATE_OFFSET))(this, a1);
		}
	};
}
