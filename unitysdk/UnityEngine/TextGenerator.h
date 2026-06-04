#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/TextFormat.h"
#include "unitysdk/UnityEngine/TextFormatChange.h"
#include "unitysdk/UnityEngine/TextFormatFlag.h"
#include "unitysdk/UnityEngine/TextFormatState.h"
#include "unitysdk/UnityEngine/TextGenerationError.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UICharInfo.h"
#include "unitysdk/UnityEngine/UILineInfo.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System { class Array; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class TextFormatStateHandle; }
namespace UnityEngine { class TextGenerator_AfterHorizontalAlignmentDel; }
namespace UnityEngine { class TextGenerator_AfterWordWrapDel; }
namespace UnityEngine { class TextGenerator_BeforeWordWrapDel; }
namespace UnityEngine { class TextGenerator_IIconAtlas; }
namespace UnityEngine { class TextGenerator_ProcessFormatDel; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTWRAP_OFFSET UNITYSDK_OFFSET(0x1B34D4A0)
#define UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B34D5C0)
#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPWRAP_OFFSET UNITYSDK_OFFSET(0x1B34D810)
#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAP_OFFSET UNITYSDK_OFFSET(0x1B34D930)
#define UNITYENGINE_TEXTGENERATOR_BEFOREWORDWRAPWRAP_OFFSET UNITYSDK_OFFSET(0x1B34D670)
#define UNITYENGINE_TEXTGENERATOR_BEFOREWORDWRAP_OFFSET UNITYSDK_OFFSET(0x1B34D790)
#define UNITYENGINE_TEXTGENERATOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B34A3E0)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B34AF20)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERSLENGTH_OFFSET UNITYSDK_OFFSET(0x1B34AF10)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1B34AD80)
#define UNITYENGINE_TEXTGENERATOR_GETFORMATVERTICESARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1B34B420)
#define UNITYENGINE_TEXTGENERATOR_GETFORMATVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B34B430)
#define UNITYENGINE_TEXTGENERATOR_GETFORMATVERTICES_OFFSET UNITYSDK_OFFSET(0x1B34B290)
#define UNITYENGINE_TEXTGENERATOR_GETICONIDSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B34B790)
#define UNITYENGINE_TEXTGENERATOR_GETICONIDSLENGTH_OFFSET UNITYSDK_OFFSET(0x1B34B780)
#define UNITYENGINE_TEXTGENERATOR_GETICONIDS_OFFSET UNITYSDK_OFFSET(0x1B34B5F0)
#define UNITYENGINE_TEXTGENERATOR_GETICONVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B34B5E0)
#define UNITYENGINE_TEXTGENERATOR_GETICONVERTICESLENGTH_OFFSET UNITYSDK_OFFSET(0x1B34B5D0)
#define UNITYENGINE_TEXTGENERATOR_GETICONVERTICES_OFFSET UNITYSDK_OFFSET(0x1B34B440)
#define UNITYENGINE_TEXTGENERATOR_GETLINESARRAY_OFFSET UNITYSDK_OFFSET(0x1B34D980)
#define UNITYENGINE_TEXTGENERATOR_GETLINESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B34B0D0)
#define UNITYENGINE_TEXTGENERATOR_GETLINESLENGTH_OFFSET UNITYSDK_OFFSET(0x1B34B0C0)
#define UNITYENGINE_TEXTGENERATOR_GETLINES_OFFSET UNITYSDK_OFFSET(0x1B34AF30)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B34BAC0)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_1_OFFSET UNITYSDK_OFFSET(0x1B34D990)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B34B950)
#define UNITYENGINE_TEXTGENERATOR_GETTEXTFORMATFLAGSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B34B940)
#define UNITYENGINE_TEXTGENERATOR_GETTEXTFORMATFLAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1B34B930)
#define UNITYENGINE_TEXTGENERATOR_GETTEXTFORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x1B34B7A0)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICESARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1B34B270)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B34B280)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1B34B0E0)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B34A500)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B34A520)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERS_OFFSET UNITYSDK_OFFSET(0x1B34CD20)
#define UNITYENGINE_TEXTGENERATOR_GET_FONTSIZEUSEDFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x1B34D0C0)
#define UNITYENGINE_TEXTGENERATOR_GET_FORMATVERTS_OFFSET UNITYSDK_OFFSET(0x1B34CB70)
#define UNITYENGINE_TEXTGENERATOR_GET_LINECOUNT_OFFSET UNITYSDK_OFFSET(0x1B34D0A0)
#define UNITYENGINE_TEXTGENERATOR_GET_LINES_OFFSET UNITYSDK_OFFSET(0x1B34CED0)
#define UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B34D080)
#define UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_OFFSET UNITYSDK_OFFSET(0x1B34BA80)
#define UNITYENGINE_TEXTGENERATOR_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B34D090)
#define UNITYENGINE_TEXTGENERATOR_GET_VERTS_OFFSET UNITYSDK_OFFSET(0x1B34C9C0)
#define UNITYENGINE_TEXTGENERATOR_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B34A3D0)
#define UNITYENGINE_TEXTGENERATOR_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B34A4F0)
#define UNITYENGINE_TEXTGENERATOR_INVALIDATECACHES_OFFSET UNITYSDK_OFFSET(0x1B34A7E0)
#define UNITYENGINE_TEXTGENERATOR_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B34A7D0)
#define UNITYENGINE_TEXTGENERATOR_PARSETEXTFORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x1B34D950)
#define UNITYENGINE_TEXTGENERATOR_POPULATEALWAYS_OFFSET UNITYSDK_OFFSET(0x1B34BF90)
#define UNITYENGINE_TEXTGENERATOR_POPULATEWITHERRORS_OFFSET UNITYSDK_OFFSET(0x1B34BB80)
#define UNITYENGINE_TEXTGENERATOR_POPULATEWITHERROR_OFFSET UNITYSDK_OFFSET(0x1B34BD60)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1B34C080)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B34D970)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B34D960)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_OFFSET UNITYSDK_OFFSET(0x1B34BA10)
#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMATWRAP_OFFSET UNITYSDK_OFFSET(0x1B34D0D0)
#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMAT_OFFSET UNITYSDK_OFFSET(0x1B34D230)
#define UNITYENGINE_TEXTGENERATOR_SETELLIPSISCHARACTER_OFFSET UNITYSDK_OFFSET(0x1B34C990)
#define UNITYENGINE_TEXTGENERATOR_SETICONATLAS_OFFSET UNITYSDK_OFFSET(0x1B34C9B0)
#define UNITYENGINE_TEXTGENERATOR_SETNOLEADINGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1B34C980)
#define UNITYENGINE_TEXTGENERATOR_SETWRAPJUSTIFY_OFFSET UNITYSDK_OFFSET(0x1B34C9A0)
#define UNITYENGINE_TEXTGENERATOR_SET_DISABLETRIMVERTICES_OFFSET UNITYSDK_OFFSET(0x1B34D0B0)
#define UNITYENGINE_TEXTGENERATOR_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B34A4C0)
#define UNITYENGINE_TEXTGENERATOR_VALIDATEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B34A530)
#define UNITYENGINE_TEXTGENERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B34A0B0)
#define UNITYENGINE_TEXTGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B34A080)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerator_TypeDefinitionIndex = 5018;

	class TextGenerator : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::String* m_LastString; // 0x18
		::UnityEngine::TextGenerationSettings m_LastSettings; // 0x20
		::System::Boolean m_HasGenerated; // 0x88
		::UnityEngine::TextGenerationError m_LastValid; // 0x8C
		::Il2CppArray<::System::Int32>* m_NoLeadingChars; // 0x90
		::System::Int32 m_NoWrapChar; // 0x98
		::System::Int32 m_EllipsisChar; // 0x9C
		::System::Int32 m_EllipsisLineNum; // 0xA0
		::System::Boolean m_WrapJustify; // 0xA4
		::UnityEngine::TextFormatStateHandle* m_FormatStateHandle; // 0xA8
		::System::Action_4<::System::IntPtr, ::UnityEngine::TextFormatChange, ::UnityEngine::TextFormat, ::System::Single>* m_ProcessFormatWrap; // 0xB0
		::System::Action_1<::System::IntPtr>* m_AfterHorizontalAlignmentWrap; // 0xB8
		::System::Action_2<::System::IntPtr, ::System::Int32>* m_BeforeWordWrapWrap; // 0xC0
		::System::Action_2<::System::IntPtr, ::System::Int32>* m_AfterWordWrapWrap; // 0xC8
		::UnityEngine::TextGenerator_ProcessFormatDel* m_ProcessFormat; // 0xD0
		::UnityEngine::TextGenerator_AfterHorizontalAlignmentDel* m_AfterHorizontalAlignment; // 0xD8
		::UnityEngine::TextGenerator_BeforeWordWrapDel* m_BeforeWordWrap; // 0xE0
		::UnityEngine::TextGenerator_AfterWordWrapDel* m_AfterWordWrap; // 0xE8
		::UnityEngine::TextGenerator_IIconAtlas* m_IconAtlas; // 0xF0
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* m_Verts; // 0xF8
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* m_FormatVerts; // 0x100
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::UICharInfo>* m_Characters; // 0x108
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::UILineInfo>* m_Lines; // 0x110
		::System::Boolean m_CachedVerts; // 0x118
		::System::Boolean m_CachedFormatVerts; // 0x119
		::System::Boolean m_CachedCharacters; // 0x11A
		::System::Boolean m_CachedLines; // 0x11B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_FINALIZE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_characterCountVisible()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNTVISIBLE_OFFSET))(this);
		}

		::UnityEngine::TextGenerationSettings ValidatedSettings(::UnityEngine::TextGenerationSettings a1)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_VALIDATEDSETTINGS_OFFSET))(this, a1);
		}

		::System::Void Invalidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INVALIDATE_OFFSET))(this);
		}

		::System::Void InvalidateCaches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INVALIDATECACHES_OFFSET))(this);
		}

		::System::Void GetCharacters(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UICharInfo>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UICharInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETCHARACTERS_OFFSET))(this, a1);
		}

		::System::Void GetLines(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UILineInfo>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UILineInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINES_OFFSET))(this, a1);
		}

		::System::Void GetVertices(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETVERTICES_OFFSET))(this, a1);
		}

		::System::Void GetFormatVertices(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETFORMATVERTICES_OFFSET))(this, a1);
		}

		::System::Void GetIconVertices(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETICONVERTICES_OFFSET))(this, a1);
		}

		::System::Void GetIconIds(::UnityEngine::Pooled::PooledList_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETICONIDS_OFFSET))(this, a1);
		}

		::System::Void GetTextFormatFlags(::UnityEngine::Pooled::PooledList_1<::UnityEngine::TextFormatFlag>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::TextFormatFlag>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETTEXTFORMATFLAGS_OFFSET))(this, a1);
		}

		::System::Single GetPreferredWidth(::System::String* a1, ::UnityEngine::TextGenerationSettings a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetPreferredHeight(::System::String* a1, ::UnityEngine::TextGenerationSettings a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDHEIGHT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PopulateWithErrors(::System::String* a1, ::UnityEngine::TextGenerationSettings a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEWITHERRORS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Populate(::System::String* a1, ::UnityEngine::TextGenerationSettings a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::TextGenerationError PopulateWithError(::System::String* a1, ::UnityEngine::TextGenerationSettings a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::TextGenerationError(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEWITHERROR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::TextGenerationError PopulateAlways(::System::String* a1, ::UnityEngine::TextGenerationSettings a2)
		{
			return ((::UnityEngine::TextGenerationError(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEALWAYS_OFFSET))(this, a1, a2);
		}

		::System::Void SetNoLeadingCharacters(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SETNOLEADINGCHARACTERS_OFFSET))(this, a1);
		}

		::System::Void SetEllipsisCharacter(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SETELLIPSISCHARACTER_OFFSET))(this, a1, a2);
		}

		::System::Void SetWrapJustify(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SETWRAPJUSTIFY_OFFSET))(this, a1);
		}

		::System::Void SetIconAtlas(::UnityEngine::TextGenerator_IIconAtlas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextGenerator_IIconAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SETICONATLAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* get_verts()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_VERTS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* get_formatVerts()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_FORMATVERTS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* get_characters()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_CHARACTERS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* get_lines()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_LINES_OFFSET))(this);
		}

		::UnityEngine::Rect get_rectExtents()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_OFFSET))(this);
		}

		::System::Int32 get_vertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_characterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_lineCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_LINECOUNT_OFFSET))(this);
		}

		::System::Void set_disableTrimVertices(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SET_DISABLETRIMVERTICES_OFFSET))(this, a1);
		}

		::System::Int32 get_fontSizeUsedForBestFit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_FONTSIZEUSEDFORBESTFIT_OFFSET))(this);
		}

		static ::System::IntPtr Internal_Create()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INTERNAL_CREATE_OFFSET))();
		}

		static ::System::Void Internal_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INTERNAL_DESTROY_OFFSET))(a1);
		}

		::System::Void ProcessFormatWrap(::System::IntPtr a1, ::UnityEngine::TextFormatChange a2, ::UnityEngine::TextFormat a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::UnityEngine::TextFormatChange, ::UnityEngine::TextFormat, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMATWRAP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ProcessFormat(::UnityEngine::TextFormatState& a1, ::UnityEngine::TextFormatChange& a2, ::UnityEngine::TextFormat& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::UnityEngine::TextFormatChange&, ::UnityEngine::TextFormat&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMAT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AfterHorizontalAlignmentWrap(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTWRAP_OFFSET))(this, a1);
		}

		::System::Void AfterHorizontalAlignment(::UnityEngine::TextFormatState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENT_OFFSET))(this, a1);
		}

		::System::Void BeforeWordWrapWrap(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_BEFOREWORDWRAPWRAP_OFFSET))(this, a1, a2);
		}

		::System::Void BeforeWordWrap(::UnityEngine::TextFormatState& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_BEFOREWORDWRAP_OFFSET))(this, a1, a2);
		}

		::System::Void AfterWordWrapWrap(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPWRAP_OFFSET))(this, a1, a2);
		}

		::System::Void AfterWordWrap(::UnityEngine::TextFormatState& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAP_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::TextFormatFlag>* ParseTextFormatFlags(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::UnityEngine::TextFormatFlag>*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PARSETEXTFORMATFLAGS_OFFSET))(a1, a2);
		}

		::System::Boolean Populate_Internal(::System::String* a1, ::UnityEngine::Font* a2, ::UnityEngine::Color a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::FontStyle a7, ::System::Single a8, ::System::Boolean a9, ::System::UInt32 a10, ::System::Boolean a11, ::System::Boolean a12, ::System::Int32 a13, ::System::Int32 a14, ::System::Int32 a15, ::System::Int32 a16, ::System::Boolean a17, ::UnityEngine::TextAnchor a18, ::System::Single a19, ::System::Single a20, ::System::Single a21, ::System::Single a22, ::System::Boolean a23, ::System::Boolean a24, ::Il2CppArray<::System::Int32>* a25, ::System::Int32 a26, ::System::Int32 a27, ::System::Int32 a28, ::System::Boolean a29, ::System::Boolean a30, ::System::Boolean a31, ::Il2CppArray<::System::Single>* a32, ::System::Action_4<::System::IntPtr, ::UnityEngine::TextFormatChange, ::UnityEngine::TextFormat, ::System::Single>* a33, ::System::Action_1<::System::IntPtr>* a34, ::System::Action_2<::System::IntPtr, ::System::Int32>* a35, ::System::Action_2<::System::IntPtr, ::System::Int32>* a36, ::System::UInt32& a37)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle, ::System::Single, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::TextAnchor, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Single>*, ::System::Action_4<::System::IntPtr, ::UnityEngine::TextFormatChange, ::UnityEngine::TextFormat, ::System::Single>*, ::System::Action_1<::System::IntPtr>*, ::System::Action_2<::System::IntPtr, ::System::Int32>*, ::System::Action_2<::System::IntPtr, ::System::Int32>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37);
		}

		::System::Boolean Populate_Internal_1(::System::String* a1, ::UnityEngine::TextGenerationSettings a2, ::UnityEngine::TextGenerationError& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::UnityEngine::TextGenerationError&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::UnityEngine::UILineInfo>* GetLinesArray()
		{
			return ((::Il2CppArray<::UnityEngine::UILineInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINESARRAY_OFFSET))(this);
		}

		::System::UInt32 GetVerticesArrayLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETVERTICESARRAYLENGTH_OFFSET))(this);
		}

		::System::UInt32 GetFormatVerticesArrayLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETFORMATVERTICESARRAYLENGTH_OFFSET))(this);
		}

		::System::UInt32 GetCharactersLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETCHARACTERSLENGTH_OFFSET))(this);
		}

		::System::UInt32 GetLinesLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINESLENGTH_OFFSET))(this);
		}

		::System::UInt32 GetIconVerticesLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETICONVERTICESLENGTH_OFFSET))(this);
		}

		::System::UInt32 GetIconIdsLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETICONIDSLENGTH_OFFSET))(this);
		}

		::System::UInt32 GetTextFormatFlagsLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETTEXTFORMATFLAGSLENGTH_OFFSET))(this);
		}

		::System::Void GetVerticesInternal(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETVERTICESINTERNAL_OFFSET))(this, a1);
		}

		::System::Void GetFormatVerticesInternal(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETFORMATVERTICESINTERNAL_OFFSET))(this, a1);
		}

		::System::Void GetCharactersInternal(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETCHARACTERSINTERNAL_OFFSET))(this, a1);
		}

		::System::Void GetLinesInternal(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINESINTERNAL_OFFSET))(this, a1);
		}

		::System::Void GetIconVerticesInternal(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETICONVERTICESINTERNAL_OFFSET))(this, a1);
		}

		::System::Void GetIconIdsInternal(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETICONIDSINTERNAL_OFFSET))(this, a1);
		}

		::System::Void GetTextFormatFlagsInternal(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETTEXTFORMATFLAGSINTERNAL_OFFSET))(this, a1);
		}

		::System::Void get_rectExtents_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_INJECTED_OFFSET))(this, a1);
		}

		::System::Boolean Populate_Internal_Injected(::System::String* a1, ::UnityEngine::Font* a2, ::UnityEngine::Color& a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::FontStyle a7, ::System::Single a8, ::System::Boolean a9, ::System::UInt32 a10, ::System::Boolean a11, ::System::Boolean a12, ::System::Int32 a13, ::System::Int32 a14, ::System::Int32 a15, ::System::Int32 a16, ::System::Boolean a17, ::UnityEngine::TextAnchor a18, ::System::Single a19, ::System::Single a20, ::System::Single a21, ::System::Single a22, ::System::Boolean a23, ::System::Boolean a24, ::Il2CppArray<::System::Int32>* a25, ::System::Int32 a26, ::System::Int32 a27, ::System::Int32 a28, ::System::Boolean a29, ::System::Boolean a30, ::System::Boolean a31, ::Il2CppArray<::System::Single>* a32, ::System::Action_4<::System::IntPtr, ::UnityEngine::TextFormatChange, ::UnityEngine::TextFormat, ::System::Single>* a33, ::System::Action_1<::System::IntPtr>* a34, ::System::Action_2<::System::IntPtr, ::System::Int32>* a35, ::System::Action_2<::System::IntPtr, ::System::Int32>* a36, ::System::UInt32& a37)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color&, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle, ::System::Single, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::TextAnchor, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Single>*, ::System::Action_4<::System::IntPtr, ::UnityEngine::TextFormatChange, ::UnityEngine::TextFormat, ::System::Single>*, ::System::Action_1<::System::IntPtr>*, ::System::Action_2<::System::IntPtr, ::System::Int32>*, ::System::Action_2<::System::IntPtr, ::System::Int32>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37);
		}

		::System::Single GetPreferredWidth_1(::System::String* a1, ::UnityEngine::TextGenerationSettings a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_1_OFFSET))(this, a1, a2);
		}
	};
}
