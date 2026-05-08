#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/HorizontalWrapMode.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/TextGenerationError.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UICharInfo.h"
#include "unitysdk/UnityEngine/UILineInfo.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/VerticalWrapMode.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TEXTGENERATOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C38FF10)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C390800)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1C3907F0)
#define UNITYENGINE_TEXTGENERATOR_GETLINESARRAY_OFFSET UNITYSDK_OFFSET(0x1C391C00)
#define UNITYENGINE_TEXTGENERATOR_GETLINESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C390820)
#define UNITYENGINE_TEXTGENERATOR_GETLINES_OFFSET UNITYSDK_OFFSET(0x1C390810)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C390BE0)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1C390850)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C390840)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1C390830)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C390180)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C3901A0)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERS_OFFSET UNITYSDK_OFFSET(0x1C391B30)
#define UNITYENGINE_TEXTGENERATOR_GET_FONTSIZEUSEDFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x1C391BD0)
#define UNITYENGINE_TEXTGENERATOR_GET_LINECOUNT_OFFSET UNITYSDK_OFFSET(0x1C391BC0)
#define UNITYENGINE_TEXTGENERATOR_GET_LINES_OFFSET UNITYSDK_OFFSET(0x1C391B70)
#define UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C391BB0)
#define UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_OFFSET UNITYSDK_OFFSET(0x1C390BA0)
#define UNITYENGINE_TEXTGENERATOR_GET_VERTS_OFFSET UNITYSDK_OFFSET(0x1C391AF0)
#define UNITYENGINE_TEXTGENERATOR_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C38FF00)
#define UNITYENGINE_TEXTGENERATOR_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C390170)
#define UNITYENGINE_TEXTGENERATOR_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C3907E0)
#define UNITYENGINE_TEXTGENERATOR_POPULATEALWAYS_OFFSET UNITYSDK_OFFSET(0x1C391220)
#define UNITYENGINE_TEXTGENERATOR_POPULATEWITHERRORS_OFFSET UNITYSDK_OFFSET(0x1C390DD0)
#define UNITYENGINE_TEXTGENERATOR_POPULATEWITHERROR_OFFSET UNITYSDK_OFFSET(0x1C391110)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1C391830)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C391BF0)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C391BE0)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_OFFSET UNITYSDK_OFFSET(0x1C390A40)
#define UNITYENGINE_TEXTGENERATOR_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C390100)
#define UNITYENGINE_TEXTGENERATOR_VALIDATEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C3901B0)
#define UNITYENGINE_TEXTGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C391C10)
#define UNITYENGINE_TEXTGENERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C38FB80)
#define UNITYENGINE_TEXTGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38FB70)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerator_TypeDefinitionIndex = 6336;

	class TextGenerator : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>** StaticGet_s_UIVertexListReleaseToPool()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5810);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>** StaticGet_s_UIVertexListAllocFromPool()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5818);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>** StaticGet_s_UICharInfoListAllocFromPool()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5820);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>** StaticGet_s_UILineInfoListReleaseToPool()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5828);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>** StaticGet_s_UICharInfoListReleaseToPool()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5830);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>** StaticGet_s_UILineInfoListAllocFromPool()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5838);
		}
		::System::IntPtr m_Ptr; // 0x10
		::System::String* m_LastString; // 0x18
		::UnityEngine::TextGenerationSettings m_LastSettings; // 0x20
		::System::Boolean m_HasGenerated; // 0x80
		::UnityEngine::TextGenerationError m_LastValid; // 0x84
		::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* m_Verts; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* m_Characters; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* m_Lines; // 0x98
		::System::Boolean m_CachedVerts; // 0xA0
		::System::Boolean m_CachedCharacters; // 0xA1
		::System::Boolean m_CachedLines; // 0xA2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 initialCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR__CTOR_1_OFFSET))(this, initialCapacity);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR__CCTOR_OFFSET))();
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

		::System::Void GetCharacters(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* characters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETCHARACTERS_OFFSET))(this, characters);
		}

		::System::Void GetLines(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* lines)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINES_OFFSET))(this, lines);
		}

		::System::Void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETVERTICES_OFFSET))(this, vertices);
		}

		::System::Single GetPreferredWidth(::System::String* str, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_OFFSET))(this, str, settings);
		}

		::System::Single GetPreferredHeight(::System::String* str, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDHEIGHT_OFFSET))(this, str, settings);
		}

		::System::Boolean PopulateWithErrors(::System::String* str, ::UnityEngine::TextGenerationSettings settings, ::UnityEngine::GameObject* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEWITHERRORS_OFFSET))(this, str, settings, context);
		}

		::System::Boolean Populate(::System::String* str, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_OFFSET))(this, str, settings);
		}

		::UnityEngine::TextGenerationError PopulateWithError(::System::String* str, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::UnityEngine::TextGenerationError(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEWITHERROR_OFFSET))(this, str, settings);
		}

		::UnityEngine::TextGenerationError PopulateAlways(::System::String* str, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::UnityEngine::TextGenerationError(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEALWAYS_OFFSET))(this, str, settings);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* get_verts()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_VERTS_OFFSET))(this);
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

		::System::Int32 get_characterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_lineCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_LINECOUNT_OFFSET))(this);
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

		::System::Boolean Populate_Internal(::System::String* str, ::UnityEngine::Font* font, ::UnityEngine::Color color, ::System::Int32 fontSize, ::System::Single scaleFactor, ::System::Single lineSpacing, ::UnityEngine::FontStyle style, ::System::Boolean richText, ::System::Boolean resizeTextForBestFit, ::System::Int32 resizeTextMinSize, ::System::Int32 resizeTextMaxSize, ::System::Int32 verticalOverFlow, ::System::Int32 horizontalOverflow, ::System::Boolean updateBounds, ::UnityEngine::TextAnchor anchor, ::System::Single extentsX, ::System::Single extentsY, ::System::Single pivotX, ::System::Single pivotY, ::System::Boolean generateOutOfBounds, ::System::Boolean alignByGeometry, ::System::UInt32& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::TextAnchor, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET))(this, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit, resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extentsX, extentsY, pivotX, pivotY, generateOutOfBounds, alignByGeometry, error);
		}

		::System::Boolean Populate_Internal_1(::System::String* str, ::UnityEngine::Font* font, ::UnityEngine::Color color, ::System::Int32 fontSize, ::System::Single scaleFactor, ::System::Single lineSpacing, ::UnityEngine::FontStyle style, ::System::Boolean richText, ::System::Boolean resizeTextForBestFit, ::System::Int32 resizeTextMinSize, ::System::Int32 resizeTextMaxSize, ::UnityEngine::VerticalWrapMode verticalOverFlow, ::UnityEngine::HorizontalWrapMode horizontalOverflow, ::System::Boolean updateBounds, ::UnityEngine::TextAnchor anchor, ::UnityEngine::Vector2 extents, ::UnityEngine::Vector2 pivot, ::System::Boolean generateOutOfBounds, ::System::Boolean alignByGeometry, ::UnityEngine::TextGenerationError& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::UnityEngine::VerticalWrapMode, ::UnityEngine::HorizontalWrapMode, ::System::Boolean, ::UnityEngine::TextAnchor, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean, ::UnityEngine::TextGenerationError&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_1_OFFSET))(this, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit, resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extents, pivot, generateOutOfBounds, alignByGeometry, error);
		}

		::Il2CppArray<::UnityEngine::UILineInfo>* GetLinesArray()
		{
			return ((::Il2CppArray<::UnityEngine::UILineInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINESARRAY_OFFSET))(this);
		}

		::System::Void GetVerticesInternal(::System::Object* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETVERTICESINTERNAL_OFFSET))(this, vertices);
		}

		::System::Void GetCharactersInternal(::System::Object* characters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETCHARACTERSINTERNAL_OFFSET))(this, characters);
		}

		::System::Void GetLinesInternal(::System::Object* lines)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINESINTERNAL_OFFSET))(this, lines);
		}

		::System::Void get_rectExtents_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_INJECTED_OFFSET))(this, ret);
		}

		::System::Boolean Populate_Internal_Injected(::System::String* str, ::UnityEngine::Font* font, ::UnityEngine::Color& color, ::System::Int32 fontSize, ::System::Single scaleFactor, ::System::Single lineSpacing, ::UnityEngine::FontStyle style, ::System::Boolean richText, ::System::Boolean resizeTextForBestFit, ::System::Int32 resizeTextMinSize, ::System::Int32 resizeTextMaxSize, ::System::Int32 verticalOverFlow, ::System::Int32 horizontalOverflow, ::System::Boolean updateBounds, ::UnityEngine::TextAnchor anchor, ::System::Single extentsX, ::System::Single extentsY, ::System::Single pivotX, ::System::Single pivotY, ::System::Boolean generateOutOfBounds, ::System::Boolean alignByGeometry, ::System::UInt32& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color&, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::TextAnchor, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_INJECTED_OFFSET))(this, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit, resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extentsX, extentsY, pivotX, pivotY, generateOutOfBounds, alignByGeometry, error);
		}
	};
}
