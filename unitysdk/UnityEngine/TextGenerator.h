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

#define UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTWRAP_OFFSET UNITYSDK_OFFSET(0x1A501CA0)
#define UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A5020F0)
#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPWRAP_OFFSET UNITYSDK_OFFSET(0x1A502680)
#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAP_OFFSET UNITYSDK_OFFSET(0x1A502AE0)
#define UNITYENGINE_TEXTGENERATOR_BEFOREWORDWRAPWRAP_OFFSET UNITYSDK_OFFSET(0x1A5021A0)
#define UNITYENGINE_TEXTGENERATOR_BEFOREWORDWRAP_OFFSET UNITYSDK_OFFSET(0x1A502600)
#define UNITYENGINE_TEXTGENERATOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4FE8E0)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4FF450)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A4FF440)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1A4FF2D0)
#define UNITYENGINE_TEXTGENERATOR_GETFORMATVERTICESARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1A4FF8F0)
#define UNITYENGINE_TEXTGENERATOR_GETFORMATVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4FF900)
#define UNITYENGINE_TEXTGENERATOR_GETFORMATVERTICES_OFFSET UNITYSDK_OFFSET(0x1A4FF780)
#define UNITYENGINE_TEXTGENERATOR_GETICONIDSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4FFC20)
#define UNITYENGINE_TEXTGENERATOR_GETICONIDSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A4FFC10)
#define UNITYENGINE_TEXTGENERATOR_GETICONIDS_OFFSET UNITYSDK_OFFSET(0x1A4FFAA0)
#define UNITYENGINE_TEXTGENERATOR_GETICONVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4FFA90)
#define UNITYENGINE_TEXTGENERATOR_GETICONVERTICESLENGTH_OFFSET UNITYSDK_OFFSET(0x1A4FFA80)
#define UNITYENGINE_TEXTGENERATOR_GETICONVERTICES_OFFSET UNITYSDK_OFFSET(0x1A4FF910)
#define UNITYENGINE_TEXTGENERATOR_GETLINESARRAY_OFFSET UNITYSDK_OFFSET(0x1A502B30)
#define UNITYENGINE_TEXTGENERATOR_GETLINESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4FF5E0)
#define UNITYENGINE_TEXTGENERATOR_GETLINESLENGTH_OFFSET UNITYSDK_OFFSET(0x1A4FF5D0)
#define UNITYENGINE_TEXTGENERATOR_GETLINES_OFFSET UNITYSDK_OFFSET(0x1A4FF460)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4FFF30)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_1_OFFSET UNITYSDK_OFFSET(0x1A502B40)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A4FFDC0)
#define UNITYENGINE_TEXTGENERATOR_GETTEXTFORMATFLAGSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4FFDB0)
#define UNITYENGINE_TEXTGENERATOR_GETTEXTFORMATFLAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A4FFDA0)
#define UNITYENGINE_TEXTGENERATOR_GETTEXTFORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x1A4FFC30)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICESARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1A4FF760)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4FF770)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1A4FF5F0)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A4FEA00)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4FEA20)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERS_OFFSET UNITYSDK_OFFSET(0x1A501180)
#define UNITYENGINE_TEXTGENERATOR_GET_FONTSIZEUSEDFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x1A501520)
#define UNITYENGINE_TEXTGENERATOR_GET_FORMATVERTS_OFFSET UNITYSDK_OFFSET(0x1A500FD0)
#define UNITYENGINE_TEXTGENERATOR_GET_LINECOUNT_OFFSET UNITYSDK_OFFSET(0x1A501500)
#define UNITYENGINE_TEXTGENERATOR_GET_LINES_OFFSET UNITYSDK_OFFSET(0x1A501330)
#define UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5014E0)
#define UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_OFFSET UNITYSDK_OFFSET(0x1A4FFEF0)
#define UNITYENGINE_TEXTGENERATOR_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5014F0)
#define UNITYENGINE_TEXTGENERATOR_GET_VERTS_OFFSET UNITYSDK_OFFSET(0x1A500E20)
#define UNITYENGINE_TEXTGENERATOR_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A4FE850)
#define UNITYENGINE_TEXTGENERATOR_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1A4FE9F0)
#define UNITYENGINE_TEXTGENERATOR_INVALIDATECACHES_OFFSET UNITYSDK_OFFSET(0x1A4FED20)
#define UNITYENGINE_TEXTGENERATOR_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A4FED10)
#define UNITYENGINE_TEXTGENERATOR_PARSETEXTFORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x1A502B00)
#define UNITYENGINE_TEXTGENERATOR_POPULATEALWAYS_OFFSET UNITYSDK_OFFSET(0x1A500450)
#define UNITYENGINE_TEXTGENERATOR_POPULATEWITHERRORS_OFFSET UNITYSDK_OFFSET(0x1A4FFFF0)
#define UNITYENGINE_TEXTGENERATOR_POPULATEWITHERROR_OFFSET UNITYSDK_OFFSET(0x1A500220)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A500540)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A502B20)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A502B10)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_OFFSET UNITYSDK_OFFSET(0x1A4FFE80)
#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMATWRAP_OFFSET UNITYSDK_OFFSET(0x1A501530)
#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMAT_OFFSET UNITYSDK_OFFSET(0x1A501A30)
#define UNITYENGINE_TEXTGENERATOR_SETELLIPSISCHARACTER_OFFSET UNITYSDK_OFFSET(0x1A500DF0)
#define UNITYENGINE_TEXTGENERATOR_SETICONATLAS_OFFSET UNITYSDK_OFFSET(0x1A500E10)
#define UNITYENGINE_TEXTGENERATOR_SETNOLEADINGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1A500DE0)
#define UNITYENGINE_TEXTGENERATOR_SETWRAPJUSTIFY_OFFSET UNITYSDK_OFFSET(0x1A500E00)
#define UNITYENGINE_TEXTGENERATOR_SET_DISABLETRIMVERTICES_OFFSET UNITYSDK_OFFSET(0x1A501510)
#define UNITYENGINE_TEXTGENERATOR_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A4FE9C0)
#define UNITYENGINE_TEXTGENERATOR_VALIDATEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A4FEA30)
#define UNITYENGINE_TEXTGENERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4FE5C0)
#define UNITYENGINE_TEXTGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4FE590)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerator_TypeDefinitionIndex = 4940;

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

		::System::Void _ctor_1(::System::Int32 initialCapacity, ::Il2CppArray<::System::Int32>* noLeadingChars, ::System::Int32 noWrapChar, ::System::Int32 ellipsisChar, ::System::Boolean wrapJustify)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR__CTOR_1_OFFSET))(this, initialCapacity, noLeadingChars, noWrapChar, ellipsisChar, wrapJustify);
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

		::UnityEngine::TextGenerationSettings ValidatedSettings(::UnityEngine::TextGenerationSettings settings)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_VALIDATEDSETTINGS_OFFSET))(this, settings);
		}

		::System::Void Invalidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INVALIDATE_OFFSET))(this);
		}

		::System::Void InvalidateCaches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INVALIDATECACHES_OFFSET))(this);
		}

		::System::Void GetCharacters(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UICharInfo>* characters)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UICharInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETCHARACTERS_OFFSET))(this, characters);
		}

		::System::Void GetLines(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UILineInfo>* lines)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UILineInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINES_OFFSET))(this, lines);
		}

		::System::Void GetVertices(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETVERTICES_OFFSET))(this, vertices);
		}

		::System::Void GetFormatVertices(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* formatVertices)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETFORMATVERTICES_OFFSET))(this, formatVertices);
		}

		::System::Void GetIconVertices(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETICONVERTICES_OFFSET))(this, vertices);
		}

		::System::Void GetIconIds(::UnityEngine::Pooled::PooledList_1<::System::Int32>* ids)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETICONIDS_OFFSET))(this, ids);
		}

		::System::Void GetTextFormatFlags(::UnityEngine::Pooled::PooledList_1<::UnityEngine::TextFormatFlag>* flags)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::TextFormatFlag>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETTEXTFORMATFLAGS_OFFSET))(this, flags);
		}

		::System::Single GetPreferredWidth(::System::String* str, ::UnityEngine::TextGenerationSettings settings, ::System::Boolean forceUpdate)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_OFFSET))(this, str, settings, forceUpdate);
		}

		::System::Single GetPreferredHeight(::System::String* str, ::UnityEngine::TextGenerationSettings settings, ::System::Boolean forceUpdate)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDHEIGHT_OFFSET))(this, str, settings, forceUpdate);
		}

		::System::Boolean PopulateWithErrors(::System::String* str, ::UnityEngine::TextGenerationSettings settings, ::UnityEngine::GameObject* context, ::System::Boolean forceUpdate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEWITHERRORS_OFFSET))(this, str, settings, context, forceUpdate);
		}

		::System::Boolean Populate(::System::String* str, ::UnityEngine::TextGenerationSettings settings, ::System::Boolean forceUpdate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_OFFSET))(this, str, settings, forceUpdate);
		}

		::UnityEngine::TextGenerationError PopulateWithError(::System::String* str, ::UnityEngine::TextGenerationSettings settings, ::System::Boolean forceUpdate)
		{
			return ((::UnityEngine::TextGenerationError(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEWITHERROR_OFFSET))(this, str, settings, forceUpdate);
		}

		::UnityEngine::TextGenerationError PopulateAlways(::System::String* str, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::UnityEngine::TextGenerationError(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEALWAYS_OFFSET))(this, str, settings);
		}

		::System::Void SetNoLeadingCharacters(::Il2CppArray<::System::Int32>* noLeadingCharacters)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SETNOLEADINGCHARACTERS_OFFSET))(this, noLeadingCharacters);
		}

		::System::Void SetEllipsisCharacter(::System::Int32 ellipsisChar, ::System::Int32 lineNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SETELLIPSISCHARACTER_OFFSET))(this, ellipsisChar, lineNum);
		}

		::System::Void SetWrapJustify(::System::Boolean wrapJustify)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SETWRAPJUSTIFY_OFFSET))(this, wrapJustify);
		}

		::System::Void SetIconAtlas(::UnityEngine::TextGenerator_IIconAtlas* iconAtlas)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextGenerator_IIconAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SETICONATLAS_OFFSET))(this, iconAtlas);
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

		::System::Void set_disableTrimVertices(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SET_DISABLETRIMVERTICES_OFFSET))(this, value);
		}

		::System::Int32 get_fontSizeUsedForBestFit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_FONTSIZEUSEDFORBESTFIT_OFFSET))(this);
		}

		static ::System::IntPtr Internal_Create()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INTERNAL_CREATE_OFFSET))();
		}

		static ::System::Void Internal_Destroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INTERNAL_DESTROY_OFFSET))(ptr);
		}

		::System::Void ProcessFormatWrap(::System::IntPtr stateHandlePtr, ::UnityEngine::TextFormatChange formatChange, ::UnityEngine::TextFormat currFormat, ::System::Single unitX)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::UnityEngine::TextFormatChange, ::UnityEngine::TextFormat, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMATWRAP_OFFSET))(this, stateHandlePtr, formatChange, currFormat, unitX);
		}

		::System::Void ProcessFormat(::UnityEngine::TextFormatState& formatState, ::UnityEngine::TextFormatChange& formatChange, ::UnityEngine::TextFormat& currFormat, ::System::Single unitX)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::UnityEngine::TextFormatChange&, ::UnityEngine::TextFormat&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMAT_OFFSET))(this, formatState, formatChange, currFormat, unitX);
		}

		::System::Void AfterHorizontalAlignmentWrap(::System::IntPtr stateHandlePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTWRAP_OFFSET))(this, stateHandlePtr);
		}

		::System::Void AfterHorizontalAlignment(::UnityEngine::TextFormatState& formatState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENT_OFFSET))(this, formatState);
		}

		::System::Void BeforeWordWrapWrap(::System::IntPtr stateHandlePtr, ::System::Int32 lastUnderlinePos)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_BEFOREWORDWRAPWRAP_OFFSET))(this, stateHandlePtr, lastUnderlinePos);
		}

		::System::Void BeforeWordWrap(::UnityEngine::TextFormatState& formatState, ::System::Int32 lastUnderlinePos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_BEFOREWORDWRAP_OFFSET))(this, formatState, lastUnderlinePos);
		}

		::System::Void AfterWordWrapWrap(::System::IntPtr stateHandlePtr, ::System::Int32 lastUnderlinePos)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPWRAP_OFFSET))(this, stateHandlePtr, lastUnderlinePos);
		}

		::System::Void AfterWordWrap(::UnityEngine::TextFormatState& formatState, ::System::Int32 lastUnderlinePos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAP_OFFSET))(this, formatState, lastUnderlinePos);
		}

		static ::Il2CppArray<::UnityEngine::TextFormatFlag>* ParseTextFormatFlags(::System::String* str, ::System::UInt32 invalidTag)
		{
			return ((::Il2CppArray<::UnityEngine::TextFormatFlag>*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PARSETEXTFORMATFLAGS_OFFSET))(str, invalidTag);
		}

		::System::Boolean Populate_Internal(::System::String* str, ::UnityEngine::Font* font, ::UnityEngine::Color color, ::System::Int32 fontSize, ::System::Single scaleFactor, ::System::Single lineSpacing, ::UnityEngine::FontStyle style, ::System::Single textureScale, ::System::Boolean richText, ::System::UInt32 invalidTag, ::System::Boolean resizeTextForBestFit, ::System::Boolean fitVertically, ::System::Int32 resizeTextMinSize, ::System::Int32 resizeTextMaxSize, ::System::Int32 verticalOverFlow, ::System::Int32 horizontalOverflow, ::System::Boolean updateBounds, ::UnityEngine::TextAnchor anchor, ::System::Single extentsX, ::System::Single extentsY, ::System::Single pivotX, ::System::Single pivotY, ::System::Boolean generateOutOfBounds, ::System::Boolean alignByGeometry, ::Il2CppArray<::System::Int32>* noLeadingChars, ::System::Int32 noWrapChar, ::System::Int32 ellipsisChar, ::System::Int32 ellipsisLineNum, ::System::Boolean wrapJustify, ::System::Boolean skipUpdateFontTexture, ::System::Boolean requireTextFormatFlags, ::Il2CppArray<::System::Single>* iconAspects, ::System::Action_4<::System::IntPtr, ::UnityEngine::TextFormatChange, ::UnityEngine::TextFormat, ::System::Single>* processFormat, ::System::Action_1<::System::IntPtr>* afterHorizontalAlignment, ::System::Action_2<::System::IntPtr, ::System::Int32>* beforeWordWrap, ::System::Action_2<::System::IntPtr, ::System::Int32>* afterWordWrap, ::System::UInt32& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle, ::System::Single, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::TextAnchor, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Single>*, ::System::Action_4<::System::IntPtr, ::UnityEngine::TextFormatChange, ::UnityEngine::TextFormat, ::System::Single>*, ::System::Action_1<::System::IntPtr>*, ::System::Action_2<::System::IntPtr, ::System::Int32>*, ::System::Action_2<::System::IntPtr, ::System::Int32>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET))(this, str, font, color, fontSize, scaleFactor, lineSpacing, style, textureScale, richText, invalidTag, resizeTextForBestFit, fitVertically, resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extentsX, extentsY, pivotX, pivotY, generateOutOfBounds, alignByGeometry, noLeadingChars, noWrapChar, ellipsisChar, ellipsisLineNum, wrapJustify, skipUpdateFontTexture, requireTextFormatFlags, iconAspects, processFormat, afterHorizontalAlignment, beforeWordWrap, afterWordWrap, error);
		}

		::System::Boolean Populate_Internal_1(::System::String* str, ::UnityEngine::TextGenerationSettings settings, ::UnityEngine::TextGenerationError& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::UnityEngine::TextGenerationError&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_1_OFFSET))(this, str, settings, error);
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

		::System::Void GetVerticesInternal(::System::Array* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETVERTICESINTERNAL_OFFSET))(this, vertices);
		}

		::System::Void GetFormatVerticesInternal(::System::Array* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETFORMATVERTICESINTERNAL_OFFSET))(this, vertices);
		}

		::System::Void GetCharactersInternal(::System::Array* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETCHARACTERSINTERNAL_OFFSET))(this, vertices);
		}

		::System::Void GetLinesInternal(::System::Array* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINESINTERNAL_OFFSET))(this, vertices);
		}

		::System::Void GetIconVerticesInternal(::System::Array* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETICONVERTICESINTERNAL_OFFSET))(this, vertices);
		}

		::System::Void GetIconIdsInternal(::System::Array* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETICONIDSINTERNAL_OFFSET))(this, vertices);
		}

		::System::Void GetTextFormatFlagsInternal(::System::Array* flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETTEXTFORMATFLAGSINTERNAL_OFFSET))(this, flags);
		}

		::System::Void get_rectExtents_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_INJECTED_OFFSET))(this, ret);
		}

		::System::Boolean Populate_Internal_Injected(::System::String* str, ::UnityEngine::Font* font, ::UnityEngine::Color& color, ::System::Int32 fontSize, ::System::Single scaleFactor, ::System::Single lineSpacing, ::UnityEngine::FontStyle style, ::System::Single textureScale, ::System::Boolean richText, ::System::UInt32 invalidTag, ::System::Boolean resizeTextForBestFit, ::System::Boolean fitVertically, ::System::Int32 resizeTextMinSize, ::System::Int32 resizeTextMaxSize, ::System::Int32 verticalOverFlow, ::System::Int32 horizontalOverflow, ::System::Boolean updateBounds, ::UnityEngine::TextAnchor anchor, ::System::Single extentsX, ::System::Single extentsY, ::System::Single pivotX, ::System::Single pivotY, ::System::Boolean generateOutOfBounds, ::System::Boolean alignByGeometry, ::Il2CppArray<::System::Int32>* noLeadingChars, ::System::Int32 noWrapChar, ::System::Int32 ellipsisChar, ::System::Int32 ellipsisLineNum, ::System::Boolean wrapJustify, ::System::Boolean skipUpdateFontTexture, ::System::Boolean requireTextFormatFlags, ::Il2CppArray<::System::Single>* iconAspects, ::System::Action_4<::System::IntPtr, ::UnityEngine::TextFormatChange, ::UnityEngine::TextFormat, ::System::Single>* processFormat, ::System::Action_1<::System::IntPtr>* afterHorizontalAlignment, ::System::Action_2<::System::IntPtr, ::System::Int32>* beforeWordWrap, ::System::Action_2<::System::IntPtr, ::System::Int32>* afterWordWrap, ::System::UInt32& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color&, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle, ::System::Single, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::TextAnchor, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Single>*, ::System::Action_4<::System::IntPtr, ::UnityEngine::TextFormatChange, ::UnityEngine::TextFormat, ::System::Single>*, ::System::Action_1<::System::IntPtr>*, ::System::Action_2<::System::IntPtr, ::System::Int32>*, ::System::Action_2<::System::IntPtr, ::System::Int32>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_INJECTED_OFFSET))(this, str, font, color, fontSize, scaleFactor, lineSpacing, style, textureScale, richText, invalidTag, resizeTextForBestFit, fitVertically, resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extentsX, extentsY, pivotX, pivotY, generateOutOfBounds, alignByGeometry, noLeadingChars, noWrapChar, ellipsisChar, ellipsisLineNum, wrapJustify, skipUpdateFontTexture, requireTextFormatFlags, iconAspects, processFormat, afterHorizontalAlignment, beforeWordWrap, afterWordWrap, error);
		}

		::System::Single GetPreferredWidth_1(::System::String* a1, ::UnityEngine::TextGenerationSettings a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_1_OFFSET))(this, a1, a2);
		}
	};
}
