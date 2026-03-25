#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_PREFERENCEKEYS__CCTOR_OFFSET UNITYSDK_OFFSET(0x188715B0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int PreferenceKeys_TypeDefinitionIndex = 34122;

	class PreferenceKeys : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_proBuilderLightGray()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(PreferenceKeys_TypeDefinitionIndex)->GetStaticField(0xD950);
		}
		static ::UnityEngine::Color* StaticGet_proBuilderDarkGray()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(PreferenceKeys_TypeDefinitionIndex)->GetStaticField(0xD960);
		}
		static ::UnityEngine::Color* StaticGet_proBuilderBlue()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(PreferenceKeys_TypeDefinitionIndex)->GetStaticField(0xD970);
		}
		// static const ::System::String* pluginTitle; // 0x0
		// static const ::System::Single k_MaxPointDistanceFromControl; // 0x0
		// static const ::System::Char DEGREE_SYMBOL; // 0x0
		// static const ::System::Char CMD_SUPER; // 0x0
		// static const ::System::Char CMD_SHIFT; // 0x0
		// static const ::System::Char CMD_OPTION; // 0x0
		// static const ::System::Char CMD_ALT; // 0x0
		// static const ::System::Char CMD_DELETE; // 0x0
		// static const ::System::Int32 menuEditor = 0x64; // 0x0
		// static const ::System::Int32 menuSelection = 0xC8; // 0x0
		// static const ::System::Int32 menuGeometry = 0xC8; // 0x0
		// static const ::System::Int32 menuActions = 0x12C; // 0x0
		// static const ::System::Int32 menuMaterialColors = 0x190; // 0x0
		// static const ::System::Int32 menuVertexColors = 0x190; // 0x0
		// static const ::System::Int32 menuRepair = 0x258; // 0x0
		// static const ::System::Int32 menuMisc = 0x258; // 0x0
		// static const ::System::Int32 menuExport = 0x320; // 0x0
		// static const ::System::String* pbDefaultEditLevel; // 0x0
		// static const ::System::String* pbDefaultSelectionMode; // 0x0
		// static const ::System::String* pbHandleAlignment; // 0x0
		// static const ::System::String* pbVertexColorTool; // 0x0
		// static const ::System::String* pbToolbarLocation; // 0x0
		// static const ::System::String* pbDefaultEntity; // 0x0
		// static const ::System::String* pbExtrudeMethod; // 0x0
		// static const ::System::String* pbDefaultStaticFlags; // 0x0
		// static const ::System::String* pbSelectedFaceColor; // 0x0
		// static const ::System::String* pbWireframeColor; // 0x0
		// static const ::System::String* pbUnselectedEdgeColor; // 0x0
		// static const ::System::String* pbSelectedEdgeColor; // 0x0
		// static const ::System::String* pbSelectedVertexColor; // 0x0
		// static const ::System::String* pbUnselectedVertexColor; // 0x0
		// static const ::System::String* pbPreselectionColor; // 0x0
		// static const ::System::String* pbDefaultOpenInDockableWindow; // 0x0
		// static const ::System::String* pbEditorPrefVersion; // 0x0
		// static const ::System::String* pbEditorShortcutsVersion; // 0x0
		// static const ::System::String* pbDefaultCollider; // 0x0
		// static const ::System::String* pbForceConvex; // 0x0
		// static const ::System::String* pbVertexColorPrefs; // 0x0
		// static const ::System::String* pbShowEditorNotifications; // 0x0
		// static const ::System::String* pbDragCheckLimit; // 0x0
		// static const ::System::String* pbForceVertexPivot; // 0x0
		// static const ::System::String* pbForceGridPivot; // 0x0
		// static const ::System::String* pbManifoldEdgeExtrusion; // 0x0
		// static const ::System::String* pbPerimeterEdgeBridgeOnly; // 0x0
		// static const ::System::String* pbPBOSelectionOnly; // 0x0
		// static const ::System::String* pbCloseShapeWindow; // 0x0
		// static const ::System::String* pbUVEditorFloating; // 0x0
		// static const ::System::String* pbUVMaterialPreview; // 0x0
		// static const ::System::String* pbShowSceneToolbar; // 0x0
		// static const ::System::String* pbNormalizeUVsOnPlanarProjection; // 0x0
		// static const ::System::String* pbStripProBuilderOnBuild; // 0x0
		// static const ::System::String* pbDisableAutoUV2Generation; // 0x0
		// static const ::System::String* pbShowSceneInfo; // 0x0
		// static const ::System::String* pbEnableBackfaceSelection; // 0x0
		// static const ::System::String* pbVertexPaletteDockable; // 0x0
		// static const ::System::String* pbExtrudeAsGroup; // 0x0
		// static const ::System::String* pbUniqueModeShortcuts; // 0x0
		// static const ::System::String* pbMaterialEditorFloating; // 0x0
		// static const ::System::String* pbShapeWindowFloating; // 0x0
		// static const ::System::String* pbIconGUI; // 0x0
		// static const ::System::String* pbShiftOnlyTooltips; // 0x0
		// static const ::System::String* pbDrawAxisLines; // 0x0
		// static const ::System::String* pbCollapseVertexToFirst; // 0x0
		// static const ::System::String* pbMeshesAreAssets; // 0x0
		// static const ::System::String* pbElementSelectIsHamFisted; // 0x0
		// static const ::System::String* pbFillHoleSelectsEntirePath; // 0x0
		// static const ::System::String* pbDetachToNewObject; // 0x0
		// static const ::System::String* pbPreserveFaces; // 0x0
		// static const ::System::String* pbDragSelectWholeElement; // 0x0
		// static const ::System::String* pbShowPreselectionHighlight; // 0x0
		// static const ::System::String* pbRectSelectMode; // 0x0
		// static const ::System::String* pbDragSelectMode; // 0x0
		// static const ::System::String* pbShadowCastingMode; // 0x0
		// static const ::System::String* pbEnableExperimental; // 0x0
		// static const ::System::String* pbCheckForProBuilderUpdates; // 0x0
		// static const ::System::String* pbManageLightmappingStaticFlag; // 0x0
		// static const ::System::String* pbShowMissingLightmapUvWarning; // 0x0
		// static const ::System::String* pbSelectedFaceDither; // 0x0
		// static const ::System::String* pbUseUnityColors; // 0x0
		// static const ::System::String* pbVertexHandleSize; // 0x0
		// static const ::System::String* pbUVGridSnapValue; // 0x0
		// static const ::System::String* pbUVWeldDistance; // 0x0
		// static const ::System::String* pbLineHandleSize; // 0x0
		// static const ::System::String* pbWireframeSize; // 0x0
		// static const ::System::String* pbWeldDistance; // 0x0
		// static const ::System::String* pbExtrudeDistance; // 0x0
		// static const ::System::String* pbBevelAmount; // 0x0
		// static const ::System::String* pbEdgeSubdivisions; // 0x0
		// static const ::System::String* pbDefaultShortcuts; // 0x0
		// static const ::System::String* pbDefaultMaterial; // 0x0
		// static const ::System::String* pbCurrentMaterialPalette; // 0x0
		// static const ::System::String* pbGrowSelectionUsingAngle; // 0x0
		// static const ::System::String* pbGrowSelectionAngle; // 0x0
		// static const ::System::String* pbGrowSelectionAngleIterative; // 0x0
		// static const ::System::String* pbShowDetail; // 0x0
		// static const ::System::String* pbShowOccluder; // 0x0
		// static const ::System::String* pbShowMover; // 0x0
		// static const ::System::String* pbShowCollider; // 0x0
		// static const ::System::String* pbShowTrigger; // 0x0
		// static const ::System::String* pbShowNoDraw; // 0x0
		// static const ::System::String* defaultUnwrapParameters; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEKEYS__CCTOR_OFFSET))();
		}
	};
}
