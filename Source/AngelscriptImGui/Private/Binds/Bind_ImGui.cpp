// Copyright Envar Games AB. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Utilities/ImGuiUtilities.h"
#include "ImGuiModule.h"

FAngelscriptBinds::FBind Bind_ImGuiWindowFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImGuiWindowFlags, "Flags for ImGui::Begin()");
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoTitleBar,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoResize,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoMove,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoScrollbar,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoScrollWithMouse,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoCollapse,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, AlwaysAutoResize,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoBackground,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoSavedSettings,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoMouseInputs,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, MenuBar,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, HorizontalScrollbar,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoFocusOnAppearing,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoBringToFrontOnFocus,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, AlwaysVerticalScrollbar,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, AlwaysHorizontalScrollbar,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, AlwaysUseWindowPadding,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoNavInputs,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoNavFocus,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, UnsavedDocument,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoNav,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoDecoration,);
	IMGUI_ENUM_VALUE(ImGuiWindowFlags, NoInputs,);
});

FAngelscriptBinds::FBind Bind_ImGuiInputTextFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImGuiInputTextFlags, "Flags for ImGui::InputText()");
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CharsDecimal,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CharsHexadecimal,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CharsUppercase,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CharsNoBlank,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, AutoSelectAll,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, EnterReturnsTrue,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CallbackCompletion,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CallbackHistory,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CallbackAlways,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CallbackCharFilter,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, AllowTabInput,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CtrlEnterForNewLine,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, NoHorizontalScroll,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, AlwaysOverwrite,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, ReadOnly,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, Password,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, NoUndoRedo,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CharsScientific,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CallbackResize,);
	IMGUI_ENUM_VALUE(ImGuiInputTextFlags, CallbackEdit,);
});

FAngelscriptBinds::FBind Bind_ImGuiTreeNodeFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImGuiTreeNodeFlags, "Flags for ImGui::TreeNodeEx(), ImGui::CollapsingHeader*()");
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, Selected,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, Framed,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, AllowItemOverlap,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, NoTreePushOnOpen,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, NoAutoOpenOnLog,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, DefaultOpen,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, OpenOnDoubleClick,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, OpenOnArrow,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, Leaf,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, Bullet,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, FramePadding,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, SpanAvailWidth,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, SpanFullWidth,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, NavLeftJumpsBackHere,);
	IMGUI_ENUM_VALUE(ImGuiTreeNodeFlags, CollapsingHeader,);
});

FAngelscriptBinds::FBind Bind_ImGuiPopupFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImGuiPopupFlags, "Flags for OpenPopup*(), BeginPopupContext*(), IsPopupOpen() functions");
	IMGUI_ENUM_VALUE(ImGuiPopupFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiPopupFlags, MouseButtonLeft,);
	IMGUI_ENUM_VALUE(ImGuiPopupFlags, MouseButtonRight,);
	IMGUI_ENUM_VALUE(ImGuiPopupFlags, MouseButtonMiddle,);
	IMGUI_ENUM_VALUE(ImGuiPopupFlags, MouseButtonMask, _);
	IMGUI_ENUM_VALUE(ImGuiPopupFlags, MouseButtonDefault, _);
	IMGUI_ENUM_VALUE(ImGuiPopupFlags, NoOpenOverExistingPopup,);
	IMGUI_ENUM_VALUE(ImGuiPopupFlags, NoOpenOverItems,);
	IMGUI_ENUM_VALUE(ImGuiPopupFlags, AnyPopupId,);
	IMGUI_ENUM_VALUE(ImGuiPopupFlags, AnyPopupLevel,);
	IMGUI_ENUM_VALUE(ImGuiPopupFlags, AnyPopup,);
});

FAngelscriptBinds::FBind Bind_ImGuiSelectableFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImGuiSelectableFlags, "Flags for ImGui::Selectable()");
	IMGUI_ENUM_VALUE(ImGuiSelectableFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiSelectableFlags, DontClosePopups,);
	IMGUI_ENUM_VALUE(ImGuiSelectableFlags, SpanAllColumns,);
	IMGUI_ENUM_VALUE(ImGuiSelectableFlags, AllowDoubleClick,);
	IMGUI_ENUM_VALUE(ImGuiSelectableFlags, Disabled,);
	IMGUI_ENUM_VALUE(ImGuiSelectableFlags, AllowItemOverlap,);
});

FAngelscriptBinds::FBind Bind_ImGuiComboFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImGuiComboFlags, "Flags for ImGui::BeginCombo()");
	IMGUI_ENUM_VALUE(ImGuiComboFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiComboFlags, PopupAlignLeft,);
	IMGUI_ENUM_VALUE(ImGuiComboFlags, HeightSmall,);
	IMGUI_ENUM_VALUE(ImGuiComboFlags, HeightRegular,);
	IMGUI_ENUM_VALUE(ImGuiComboFlags, HeightLarge,);
	IMGUI_ENUM_VALUE(ImGuiComboFlags, HeightLargest,);
	IMGUI_ENUM_VALUE(ImGuiComboFlags, NoArrowButton,);
	IMGUI_ENUM_VALUE(ImGuiComboFlags, NoPreview,);
	IMGUI_ENUM_VALUE(ImGuiComboFlags, HeightMask, _);
});

FAngelscriptBinds::FBind Bind_ImGuiTabBarFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImGuiTabBarFlags, "Flags for ImGui::BeginTabBar()");
	IMGUI_ENUM_VALUE(ImGuiTabBarFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiTabBarFlags, Reorderable,);
	IMGUI_ENUM_VALUE(ImGuiTabBarFlags, AutoSelectNewTabs,);
	IMGUI_ENUM_VALUE(ImGuiTabBarFlags, TabListPopupButton,);
	IMGUI_ENUM_VALUE(ImGuiTabBarFlags, NoCloseWithMiddleMouseButton,);
	IMGUI_ENUM_VALUE(ImGuiTabBarFlags, NoTabListScrollingButtons,);
	IMGUI_ENUM_VALUE(ImGuiTabBarFlags, NoTooltip,);
	IMGUI_ENUM_VALUE(ImGuiTabBarFlags, FittingPolicyResizeDown,);
	IMGUI_ENUM_VALUE(ImGuiTabBarFlags, FittingPolicyScroll,);
	IMGUI_ENUM_VALUE(ImGuiTabBarFlags, FittingPolicyMask, _);
	IMGUI_ENUM_VALUE(ImGuiTabBarFlags, FittingPolicyDefault, _);
});

FAngelscriptBinds::FBind Bind_ImGuiTabItemFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImGuiTabItemFlags, "Flags for ImGui::BeginTabItem()");
	IMGUI_ENUM_VALUE(ImGuiTabItemFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiTabItemFlags, UnsavedDocument,);
	IMGUI_ENUM_VALUE(ImGuiTabItemFlags, SetSelected,);
	IMGUI_ENUM_VALUE(ImGuiTabItemFlags, NoCloseWithMiddleMouseButton,);
	IMGUI_ENUM_VALUE(ImGuiTabItemFlags, NoPushId,);
	IMGUI_ENUM_VALUE(ImGuiTabItemFlags, NoTooltip,);
	IMGUI_ENUM_VALUE(ImGuiTabItemFlags, NoReorder,);
	IMGUI_ENUM_VALUE(ImGuiTabItemFlags, Leading,);
	IMGUI_ENUM_VALUE(ImGuiTabItemFlags, Trailing,);
});

FAngelscriptBinds::FBind Bind_ImGuiTableFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImGuiTableFlags, "Flags for ImGui::BeginTable()");
	IMGUI_ENUM_VALUE(ImGuiTableFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, Resizable,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, Reorderable,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, Hideable,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, Sortable,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, NoSavedSettings,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, ContextMenuInBody,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, RowBg,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, BordersInnerH,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, BordersOuterH,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, BordersInnerV,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, BordersOuterV,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, BordersH,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, BordersV,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, BordersInner,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, BordersOuter,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, Borders,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, NoBordersInBody,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, NoBordersInBodyUntilResize,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, SizingFixedFit,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, SizingFixedSame,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, SizingStretchProp,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, SizingStretchSame,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, NoHostExtendX,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, NoHostExtendY,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, NoKeepColumnsVisible,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, PreciseWidths,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, NoClip,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, PadOuterX,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, NoPadOuterX,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, NoPadInnerX,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, ScrollX,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, ScrollY,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, SortMulti,);
	IMGUI_ENUM_VALUE(ImGuiTableFlags, SortTristate,);
});

FAngelscriptBinds::FBind Bind_ImGuiTableColumnFlags(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiTableColumnFlags, "Flags for ImGui::TableSetupColumn()");
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, Disabled,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, DefaultHide,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, DefaultSort,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, WidthStretch,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, WidthFixed,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, NoResize,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, NoReorder,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, NoHide,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, NoClip,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, NoSort,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, NoSortAscending,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, NoSortDescending,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, NoHeaderLabel,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, NoHeaderWidth,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, PreferSortAscending,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, PreferSortDescending,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, IndentEnable,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, IndentDisable,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, IsEnabled,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, IsVisible,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, IsSorted,);
	IMGUI_ENUM_VALUE(ImGuiTableColumnFlags, IsHovered,);
});

FAngelscriptBinds::FBind Bind_ImGuiTableRowFlags(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiTableRowFlags, "Flags for ImGui::TableNextRow()");
	IMGUI_ENUM_VALUE(ImGuiTableRowFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiTableRowFlags, Headers,);
});

FAngelscriptBinds::FBind Bind_ImGuiTableBgTarget(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiTableBgTarget, "Enum for ImGui::TableSetBgColor()");
	IMGUI_ENUM_VALUE(ImGuiTableBgTarget, None,);
	IMGUI_ENUM_VALUE(ImGuiTableBgTarget, RowBg0,);
	IMGUI_ENUM_VALUE(ImGuiTableBgTarget, RowBg1,);
	IMGUI_ENUM_VALUE(ImGuiTableBgTarget, CellBg,);
});

FAngelscriptBinds::FBind Bind_ImGuiFocusedFlags(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiFocusedFlags, "Flags for ImGui::IsWindowFocused()");
	IMGUI_ENUM_VALUE(ImGuiFocusedFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiFocusedFlags, ChildWindows,);
	IMGUI_ENUM_VALUE(ImGuiFocusedFlags, RootWindow,);
	IMGUI_ENUM_VALUE(ImGuiFocusedFlags, AnyWindow,);
	IMGUI_ENUM_VALUE(ImGuiFocusedFlags, NoPopupHierarchy,);
	IMGUI_ENUM_VALUE(ImGuiFocusedFlags, RootAndChildWindows,);
});

FAngelscriptBinds::FBind Bind_ImGuiHoveredFlags(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiHoveredFlags, "Flags for ImGui::IsItemHovered(), ImGui::IsWindowHovered()");
	IMGUI_ENUM_VALUE(ImGuiHoveredFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiHoveredFlags, ChildWindows,);
	IMGUI_ENUM_VALUE(ImGuiHoveredFlags, RootWindow,);
	IMGUI_ENUM_VALUE(ImGuiHoveredFlags, AnyWindow,);
	IMGUI_ENUM_VALUE(ImGuiHoveredFlags, NoPopupHierarchy,);
	IMGUI_ENUM_VALUE(ImGuiHoveredFlags, AllowWhenBlockedByPopup,);
	IMGUI_ENUM_VALUE(ImGuiHoveredFlags, AllowWhenBlockedByActiveItem,);
	IMGUI_ENUM_VALUE(ImGuiHoveredFlags, AllowWhenOverlapped,);
	IMGUI_ENUM_VALUE(ImGuiHoveredFlags, AllowWhenDisabled,);
	IMGUI_ENUM_VALUE(ImGuiHoveredFlags, RectOnly,);
	IMGUI_ENUM_VALUE(ImGuiHoveredFlags, RootAndChildWindows,);
});

FAngelscriptBinds::FBind Bind_ImGuiDragDropFlags(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiDragDropFlags, "Flags for ImGui::BeginDragDropSource(), ImGui::AcceptDragDropPayload()");
	IMGUI_ENUM_VALUE(ImGuiDragDropFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiDragDropFlags, SourceNoPreviewTooltip,);
	IMGUI_ENUM_VALUE(ImGuiDragDropFlags, SourceNoDisableHover,);
	IMGUI_ENUM_VALUE(ImGuiDragDropFlags, SourceNoHoldToOpenOthers,);
	IMGUI_ENUM_VALUE(ImGuiDragDropFlags, SourceAllowNullID,);
	IMGUI_ENUM_VALUE(ImGuiDragDropFlags, SourceExtern,);
	IMGUI_ENUM_VALUE(ImGuiDragDropFlags, SourceAutoExpirePayload,);
	IMGUI_ENUM_VALUE(ImGuiDragDropFlags, AcceptBeforeDelivery,);
	IMGUI_ENUM_VALUE(ImGuiDragDropFlags, AcceptNoDrawDefaultRect,);
	IMGUI_ENUM_VALUE(ImGuiDragDropFlags, AcceptNoPreviewTooltip,);
	IMGUI_ENUM_VALUE(ImGuiDragDropFlags, AcceptPeekOnly,);
});

FAngelscriptBinds::FBind Bind_ImGuiKey(FAngelscriptBinds::EOrder::Normal, []
{
    IMGUI_ENUM(ImGuiKey, "Identifies a key");
	IMGUI_ENUM_VALUE(ImGuiKey, None,);
	IMGUI_ENUM_VALUE(ImGuiKey, Tab,);
	IMGUI_ENUM_VALUE(ImGuiKey, LeftArrow,);
	IMGUI_ENUM_VALUE(ImGuiKey, RightArrow,);
	IMGUI_ENUM_VALUE(ImGuiKey, UpArrow,);
	IMGUI_ENUM_VALUE(ImGuiKey, DownArrow,);
	IMGUI_ENUM_VALUE(ImGuiKey, PageUp,);
	IMGUI_ENUM_VALUE(ImGuiKey, PageDown,);
	IMGUI_ENUM_VALUE(ImGuiKey, Home,);
	IMGUI_ENUM_VALUE(ImGuiKey, End,);
	IMGUI_ENUM_VALUE(ImGuiKey, Insert,);
	IMGUI_ENUM_VALUE(ImGuiKey, Delete,);
	IMGUI_ENUM_VALUE(ImGuiKey, Backspace,);
	IMGUI_ENUM_VALUE(ImGuiKey, Space,);
	IMGUI_ENUM_VALUE(ImGuiKey, Enter,);
	IMGUI_ENUM_VALUE(ImGuiKey, Escape,);
	IMGUI_ENUM_VALUE(ImGuiKey, LeftCtrl,);
	IMGUI_ENUM_VALUE(ImGuiKey, LeftShift,);
	IMGUI_ENUM_VALUE(ImGuiKey, LeftAlt,);
	IMGUI_ENUM_VALUE(ImGuiKey, LeftSuper,);
	IMGUI_ENUM_VALUE(ImGuiKey, RightCtrl,);
	IMGUI_ENUM_VALUE(ImGuiKey, RightShift,);
	IMGUI_ENUM_VALUE(ImGuiKey, RightAlt,);
	IMGUI_ENUM_VALUE(ImGuiKey, RightSuper,);
	IMGUI_ENUM_VALUE(ImGuiKey, Menu,);
	static ImGuiKey Key0 = ImGuiKey_0;
	FAngelscriptBinds::BindGlobalVariable("EImGuiKey Key0", &Key0);
	static ImGuiKey Key1 = ImGuiKey_1;
	FAngelscriptBinds::BindGlobalVariable("EImGuiKey Key1", &Key1);
	static ImGuiKey Key2 = ImGuiKey_2;
	FAngelscriptBinds::BindGlobalVariable("EImGuiKey Key2", &Key2);
	static ImGuiKey Key3 = ImGuiKey_3;
	FAngelscriptBinds::BindGlobalVariable("EImGuiKey Key3", &Key3);
	static ImGuiKey Key4 = ImGuiKey_4;
	FAngelscriptBinds::BindGlobalVariable("EImGuiKey Key4", &Key4);
	static ImGuiKey Key5 = ImGuiKey_5;
	FAngelscriptBinds::BindGlobalVariable("EImGuiKey Key5", &Key5);
	static ImGuiKey Key6 = ImGuiKey_6;
	FAngelscriptBinds::BindGlobalVariable("EImGuiKey Key6", &Key6);
	static ImGuiKey Key7 = ImGuiKey_7;
	FAngelscriptBinds::BindGlobalVariable("EImGuiKey Key7", &Key7);
	static ImGuiKey Key8 = ImGuiKey_8;
	FAngelscriptBinds::BindGlobalVariable("EImGuiKey Key8", &Key8);
	static ImGuiKey Key9 = ImGuiKey_9;
	FAngelscriptBinds::BindGlobalVariable("EImGuiKey Key9", &Key9);
	IMGUI_ENUM_VALUE(ImGuiKey, A,);
	IMGUI_ENUM_VALUE(ImGuiKey, B,);
	IMGUI_ENUM_VALUE(ImGuiKey, C,);
	IMGUI_ENUM_VALUE(ImGuiKey, D,);
	IMGUI_ENUM_VALUE(ImGuiKey, E,);
	IMGUI_ENUM_VALUE(ImGuiKey, F,);
	IMGUI_ENUM_VALUE(ImGuiKey, G,);
	IMGUI_ENUM_VALUE(ImGuiKey, H,);
	IMGUI_ENUM_VALUE(ImGuiKey, I,);
	IMGUI_ENUM_VALUE(ImGuiKey, J,);
	IMGUI_ENUM_VALUE(ImGuiKey, K,);
	IMGUI_ENUM_VALUE(ImGuiKey, L,);
	IMGUI_ENUM_VALUE(ImGuiKey, M,);
	IMGUI_ENUM_VALUE(ImGuiKey, N,);
	IMGUI_ENUM_VALUE(ImGuiKey, O,);
	IMGUI_ENUM_VALUE(ImGuiKey, P,);
	IMGUI_ENUM_VALUE(ImGuiKey, Q,);
	IMGUI_ENUM_VALUE(ImGuiKey, R,);
	IMGUI_ENUM_VALUE(ImGuiKey, S,);
	IMGUI_ENUM_VALUE(ImGuiKey, T,);
	IMGUI_ENUM_VALUE(ImGuiKey, U,);
	IMGUI_ENUM_VALUE(ImGuiKey, V,);
	IMGUI_ENUM_VALUE(ImGuiKey, W,);
	IMGUI_ENUM_VALUE(ImGuiKey, X,);
	IMGUI_ENUM_VALUE(ImGuiKey, Y,);
	IMGUI_ENUM_VALUE(ImGuiKey, Z,);
	IMGUI_ENUM_VALUE(ImGuiKey, F1,);
	IMGUI_ENUM_VALUE(ImGuiKey, F2,);
	IMGUI_ENUM_VALUE(ImGuiKey, F3,);
	IMGUI_ENUM_VALUE(ImGuiKey, F4,);
	IMGUI_ENUM_VALUE(ImGuiKey, F5,);
	IMGUI_ENUM_VALUE(ImGuiKey, F6,);
	IMGUI_ENUM_VALUE(ImGuiKey, F7,);
	IMGUI_ENUM_VALUE(ImGuiKey, F8,);
	IMGUI_ENUM_VALUE(ImGuiKey, F9,);
	IMGUI_ENUM_VALUE(ImGuiKey, F10,);
	IMGUI_ENUM_VALUE(ImGuiKey, F11,);
	IMGUI_ENUM_VALUE(ImGuiKey, F12,);
	IMGUI_ENUM_VALUE(ImGuiKey, Apostrophe,);
	IMGUI_ENUM_VALUE(ImGuiKey, Comma,);
	IMGUI_ENUM_VALUE(ImGuiKey, Minus,);
	IMGUI_ENUM_VALUE(ImGuiKey, Period,);
	IMGUI_ENUM_VALUE(ImGuiKey, Slash,);
	IMGUI_ENUM_VALUE(ImGuiKey, Semicolon,);
	IMGUI_ENUM_VALUE(ImGuiKey, Equal,);
	IMGUI_ENUM_VALUE(ImGuiKey, LeftBracket,);
	IMGUI_ENUM_VALUE(ImGuiKey, Backslash,);
	IMGUI_ENUM_VALUE(ImGuiKey, RightBracket,);
	IMGUI_ENUM_VALUE(ImGuiKey, GraveAccent,);
	IMGUI_ENUM_VALUE(ImGuiKey, CapsLock,);
	IMGUI_ENUM_VALUE(ImGuiKey, ScrollLock,);
	IMGUI_ENUM_VALUE(ImGuiKey, NumLock,);
	IMGUI_ENUM_VALUE(ImGuiKey, PrintScreen,);
	IMGUI_ENUM_VALUE(ImGuiKey, Pause,);
	IMGUI_ENUM_VALUE(ImGuiKey, Keypad0,);
	IMGUI_ENUM_VALUE(ImGuiKey, Keypad1,);
	IMGUI_ENUM_VALUE(ImGuiKey, Keypad2,);
	IMGUI_ENUM_VALUE(ImGuiKey, Keypad3,);
	IMGUI_ENUM_VALUE(ImGuiKey, Keypad4,);
	IMGUI_ENUM_VALUE(ImGuiKey, Keypad5,);
	IMGUI_ENUM_VALUE(ImGuiKey, Keypad6,);
	IMGUI_ENUM_VALUE(ImGuiKey, Keypad7,);
	IMGUI_ENUM_VALUE(ImGuiKey, Keypad8,);
	IMGUI_ENUM_VALUE(ImGuiKey, Keypad9,);
	IMGUI_ENUM_VALUE(ImGuiKey, KeypadDecimal,);
	IMGUI_ENUM_VALUE(ImGuiKey, KeypadDivide,);
	IMGUI_ENUM_VALUE(ImGuiKey, KeypadMultiply,);
	IMGUI_ENUM_VALUE(ImGuiKey, KeypadSubtract,);
	IMGUI_ENUM_VALUE(ImGuiKey, KeypadAdd,);
	IMGUI_ENUM_VALUE(ImGuiKey, KeypadEnter,);
	IMGUI_ENUM_VALUE(ImGuiKey, KeypadEqual,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadStart,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadBack,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadFaceUp,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadFaceDown,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadFaceLeft,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadFaceRight,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadDpadUp,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadDpadDown,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadDpadLeft,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadDpadRight,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadL1,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadR1,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadL2,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadR2,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadL3,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadR3,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadLStickUp,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadLStickDown,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadLStickLeft,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadLStickRight,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadRStickUp,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadRStickDown,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadRStickLeft,);
	IMGUI_ENUM_VALUE(ImGuiKey, GamepadRStickRight,);
	IMGUI_ENUM_VALUE(ImGuiKey, ModCtrl,);
	IMGUI_ENUM_VALUE(ImGuiKey, ModShift,);
	IMGUI_ENUM_VALUE(ImGuiKey, ModAlt,);
	IMGUI_ENUM_VALUE(ImGuiKey, ModSuper,);
});

FAngelscriptBinds::FBind Bind_ImGuiCol(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiCol, "Enumeration for PushStyleColor() / PopStyleColor()");
	IMGUI_ENUM_VALUE(ImGuiCol, Text,);
	IMGUI_ENUM_VALUE(ImGuiCol, TextDisabled,);
	IMGUI_ENUM_VALUE(ImGuiCol, WindowBg,);
	IMGUI_ENUM_VALUE(ImGuiCol, ChildBg,);
	IMGUI_ENUM_VALUE(ImGuiCol, PopupBg,);
	IMGUI_ENUM_VALUE(ImGuiCol, Border,);
	IMGUI_ENUM_VALUE(ImGuiCol, BorderShadow,);
	IMGUI_ENUM_VALUE(ImGuiCol, FrameBg,);
	IMGUI_ENUM_VALUE(ImGuiCol, FrameBgHovered,);
	IMGUI_ENUM_VALUE(ImGuiCol, FrameBgActive,);
	IMGUI_ENUM_VALUE(ImGuiCol, TitleBg,);
	IMGUI_ENUM_VALUE(ImGuiCol, TitleBgActive,);
	IMGUI_ENUM_VALUE(ImGuiCol, TitleBgCollapsed,);
	IMGUI_ENUM_VALUE(ImGuiCol, MenuBarBg,);
	IMGUI_ENUM_VALUE(ImGuiCol, ScrollbarBg,);
	IMGUI_ENUM_VALUE(ImGuiCol, ScrollbarGrab,);
	IMGUI_ENUM_VALUE(ImGuiCol, ScrollbarGrabHovered,);
	IMGUI_ENUM_VALUE(ImGuiCol, ScrollbarGrabActive,);
	IMGUI_ENUM_VALUE(ImGuiCol, CheckMark,);
	IMGUI_ENUM_VALUE(ImGuiCol, SliderGrab,);
	IMGUI_ENUM_VALUE(ImGuiCol, SliderGrabActive,);
	IMGUI_ENUM_VALUE(ImGuiCol, Button,);
	IMGUI_ENUM_VALUE(ImGuiCol, ButtonHovered,);
	IMGUI_ENUM_VALUE(ImGuiCol, ButtonActive,);
	IMGUI_ENUM_VALUE(ImGuiCol, Header,);
	IMGUI_ENUM_VALUE(ImGuiCol, HeaderHovered,);
	IMGUI_ENUM_VALUE(ImGuiCol, HeaderActive,);
	IMGUI_ENUM_VALUE(ImGuiCol, Separator,);
	IMGUI_ENUM_VALUE(ImGuiCol, SeparatorHovered,);
	IMGUI_ENUM_VALUE(ImGuiCol, SeparatorActive,);
	IMGUI_ENUM_VALUE(ImGuiCol, ResizeGrip,);
	IMGUI_ENUM_VALUE(ImGuiCol, ResizeGripHovered,);
	IMGUI_ENUM_VALUE(ImGuiCol, ResizeGripActive,);
	IMGUI_ENUM_VALUE(ImGuiCol, Tab,);
	IMGUI_ENUM_VALUE(ImGuiCol, TabHovered,);
	IMGUI_ENUM_VALUE(ImGuiCol, TabActive,);
	IMGUI_ENUM_VALUE(ImGuiCol, TabUnfocused,);
	IMGUI_ENUM_VALUE(ImGuiCol, TabUnfocusedActive,);
	IMGUI_ENUM_VALUE(ImGuiCol, PlotLines,);
	IMGUI_ENUM_VALUE(ImGuiCol, PlotLinesHovered,);
	IMGUI_ENUM_VALUE(ImGuiCol, PlotHistogram,);
	IMGUI_ENUM_VALUE(ImGuiCol, PlotHistogramHovered,);
	IMGUI_ENUM_VALUE(ImGuiCol, TableHeaderBg,);
	IMGUI_ENUM_VALUE(ImGuiCol, TableBorderStrong,);
	IMGUI_ENUM_VALUE(ImGuiCol, TableBorderLight,);
	IMGUI_ENUM_VALUE(ImGuiCol, TableRowBg,);
	IMGUI_ENUM_VALUE(ImGuiCol, TableRowBgAlt,);
	IMGUI_ENUM_VALUE(ImGuiCol, TextSelectedBg,);
	IMGUI_ENUM_VALUE(ImGuiCol, DragDropTarget,);
	IMGUI_ENUM_VALUE(ImGuiCol, NavHighlight,);
	IMGUI_ENUM_VALUE(ImGuiCol, NavWindowingHighlight,);
	IMGUI_ENUM_VALUE(ImGuiCol, NavWindowingDimBg,);
	IMGUI_ENUM_VALUE(ImGuiCol, ModalWindowDimBg,);
});

FAngelscriptBinds::FBind Bind_ImGuiStyleVar(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiStyleVar, "Enumeration for PushStyleVar() / PopStyleVar() to temporarily modify the ImGuiStyle structure");
	IMGUI_ENUM_VALUE(ImGuiStyleVar, Alpha,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, DisabledAlpha,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, WindowPadding,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, WindowRounding,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, WindowBorderSize,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, WindowMinSize,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, WindowTitleAlign,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, ChildRounding,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, ChildBorderSize,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, PopupRounding,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, PopupBorderSize,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, FramePadding,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, FrameRounding,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, FrameBorderSize,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, ItemSpacing,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, ItemInnerSpacing,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, IndentSpacing,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, CellPadding,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, ScrollbarSize,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, ScrollbarRounding,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, GrabMinSize,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, GrabRounding,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, TabRounding,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, ButtonTextAlign,);
	IMGUI_ENUM_VALUE(ImGuiStyleVar, SelectableTextAlign,);
});

FAngelscriptBinds::FBind Bind_ImGuiButtonFlags(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiButtonFlags, "Flags for InvisibleButton()");
	IMGUI_ENUM_VALUE(ImGuiButtonFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiButtonFlags, MouseButtonLeft,);
	IMGUI_ENUM_VALUE(ImGuiButtonFlags, MouseButtonRight,);
	IMGUI_ENUM_VALUE(ImGuiButtonFlags, MouseButtonMiddle,);
});

FAngelscriptBinds::FBind Bind_ImGuiColorEditFlags(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiColorEditFlags, "Flags for ColorEdit3() / ColorEdit4() / ColorPicker3() / ColorPicker4() / ColorButton()");
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, NoAlpha,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, NoPicker,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, NoOptions,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, NoSmallPreview,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, NoInputs,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, NoTooltip,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, NoLabel,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, NoSidePreview,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, NoDragDrop,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, NoBorder,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, AlphaBar,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, AlphaPreview,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, AlphaPreviewHalf,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, HDR,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, DisplayRGB,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, DisplayHSV,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, DisplayHex,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, Uint8,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, Float,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, PickerHueBar,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, PickerHueWheel,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, InputRGB,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, InputHSV,);
	IMGUI_ENUM_VALUE(ImGuiColorEditFlags, DefaultOptions, _);
});

FAngelscriptBinds::FBind Bind_ImGuiSliderFlags(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiSliderFlags, "Flags for DragFloat(), DragInt(), SliderFloat(), SliderInt() etc");
	IMGUI_ENUM_VALUE(ImGuiSliderFlags, None,);
	IMGUI_ENUM_VALUE(ImGuiSliderFlags, AlwaysClamp,);
	IMGUI_ENUM_VALUE(ImGuiSliderFlags, Logarithmic,);
	IMGUI_ENUM_VALUE(ImGuiSliderFlags, NoRoundToFormat,);
	IMGUI_ENUM_VALUE(ImGuiSliderFlags, NoInput,);
});

FAngelscriptBinds::FBind Bind_ImGuiMouseButton(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiMouseButton, "Identify a mouse button");
	IMGUI_ENUM_VALUE(ImGuiMouseButton, Left,);
	IMGUI_ENUM_VALUE(ImGuiMouseButton, Right,);
	IMGUI_ENUM_VALUE(ImGuiMouseButton, Middle,);
});

FAngelscriptBinds::FBind Bind_ImGuiMouseCursor(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiMouseCursor, "Enumeration for GetMouseCursor(), SetMouseCursor()");
	IMGUI_ENUM_VALUE(ImGuiMouseCursor, None,);
	IMGUI_ENUM_VALUE(ImGuiMouseCursor, Arrow,);
	IMGUI_ENUM_VALUE(ImGuiMouseCursor, TextInput,);
	IMGUI_ENUM_VALUE(ImGuiMouseCursor, ResizeAll,);
	IMGUI_ENUM_VALUE(ImGuiMouseCursor, ResizeNS,);
	IMGUI_ENUM_VALUE(ImGuiMouseCursor, ResizeEW,);
	IMGUI_ENUM_VALUE(ImGuiMouseCursor, ResizeNESW,);
	IMGUI_ENUM_VALUE(ImGuiMouseCursor, ResizeNWSE,);
	IMGUI_ENUM_VALUE(ImGuiMouseCursor, Hand,);
	IMGUI_ENUM_VALUE(ImGuiMouseCursor, NotAllowed,);
});

FAngelscriptBinds::FBind Bind_ImGuiCond(FAngelscriptBinds::EOrder::Normal, []
{
	IMGUI_ENUM(ImGuiCond, "Enumeration for ImGui::SetWindow***(), SetNextWindow***(), SetNextItem***() functions");
	IMGUI_ENUM_VALUE(ImGuiCond, None,);
	IMGUI_ENUM_VALUE(ImGuiCond, Always,);
	IMGUI_ENUM_VALUE(ImGuiCond, Once,);
	IMGUI_ENUM_VALUE(ImGuiCond, FirstUseEver,);
	IMGUI_ENUM_VALUE(ImGuiCond, Appearing,);
});

FAngelscriptBinds::FBind Bind_ImGuiModule(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace NS("ImGuiModule");
	FAngelscriptBinds::BindGlobalFunction("bool IsInputEnabled()",
	[]() -> bool
	{
		return FModuleManager::GetModuleChecked<FImGuiModule>("ImGui").GetProperties().IsInputEnabled();
	});
	FAngelscriptBinds::BindGlobalFunction("void SetInputEnabled(bool bEnabled)",
	[](const bool bEnabled) -> void
	{
		FModuleManager::GetModuleChecked<FImGuiModule>("ImGui").GetProperties().SetInputEnabled(bEnabled);
	});
	FAngelscriptBinds::BindGlobalFunction("void ToggleInput()",
	[]() -> void
	{
		FModuleManager::GetModuleChecked<FImGuiModule>("ImGui").GetProperties().ToggleInput();
	});
	FAngelscriptBinds::BindGlobalFunction("void SetKeyboardInputShared(bool bEnabled)",
	[](const bool bEnabled) -> void
	{
		FModuleManager::GetModuleChecked<FImGuiModule>("ImGui").GetProperties().SetKeyboardInputShared(bEnabled);
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Windows(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool Begin(const FString& Name, EImGuiWindowFlags Flags = EImGuiWindowFlags::None)",
	[](const FString& Name, const ImGuiWindowFlags Flags) -> bool
	{
		return ImGui::Begin(ToImGui(Name), nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool Begin(const FString& Name, bool& bOpen, EImGuiWindowFlags Flags = EImGuiWindowFlags::None)",
	[](const FString& Name, bool& bOpen, const ImGuiWindowFlags Flags) -> bool
	{
		return ImGui::Begin(ToImGui(Name), &bOpen, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void End()",
	[]() -> void
	{
		ImGui::End();
	});
	FAngelscriptBinds::BindGlobalFunction("bool BeginChild(const FString& Name, const FVector2f& Size = FVector2f(0, 0), bool bBorder = false, EImGuiWindowFlags Flags = EImGuiWindowFlags::None)",
	[](const FString& Name, const FVector2f& Position, const bool bBorder, const ImGuiWindowFlags Flags) -> bool
	{
		return ImGui::BeginChild(ToImGui(Name), ToImGui(Position), bBorder, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void EndChild()",
	[]() -> void
	{
		ImGui::EndChild();
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Window_Utilities(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool IsWindowAppearing()",
    []() -> bool
    {
        return ImGui::IsWindowAppearing();
    });
    FAngelscriptBinds::BindGlobalFunction("bool IsWindowCollapsed()",
    []() -> bool
    {
        return ImGui::IsWindowCollapsed();
    });
    FAngelscriptBinds::BindGlobalFunction("bool IsWindowFocused(EImGuiFocusedFlags flags = EImGuiFocusedFlags::None)",
    [](ImGuiFocusedFlags Flags) -> bool
    {
        return ImGui::IsWindowFocused(Flags);
    });
    FAngelscriptBinds::BindGlobalFunction("bool IsWindowHovered(EImGuiHoveredFlags flags = EImGuiFocusedFlags::None)",
    [](ImGuiFocusedFlags Flags) -> bool
    {
        return ImGui::IsWindowHovered(Flags);
    });
    FAngelscriptBinds::BindGlobalFunction("FVector2f GetWindowPos()",
    []() -> FVector2f
    {
        return ToUnreal(ImGui::GetWindowPos());
    });
    FAngelscriptBinds::BindGlobalFunction("FVector2f GetWindowSize()",
    []() -> FVector2f
    {
        return ToUnreal(ImGui::GetWindowSize());
    });
    FAngelscriptBinds::BindGlobalFunction("float32 GetWindowWidth()",
    []() -> float
    {
        return ImGui::GetWindowWidth();
    });
    FAngelscriptBinds::BindGlobalFunction("float32 GetWindowHeight()",
    []() -> float
    {
        return ImGui::GetWindowHeight();
    });
});

FAngelscriptBinds::FBind Bind_ImGui_Window_Manipulation(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("void SetNextWindowPosition(const FVector2f& Position, EImGuiCond Condition = EImGuiCond::None, const FVector2f& Pivot = FVector2f(0, 0))",
	[](const FVector2f& Position, ImGuiCond Condition, const FVector2f& Pivot) -> void
	{
		ImGui::SetNextWindowPos(ToImGui(Position), Condition, ToImGui(Pivot));
	});
	FAngelscriptBinds::BindGlobalFunction("void SetNextWindowSize(const FVector2f& Size, EImGuiCond Condition = EImGuiCond::None)",
	[](const FVector2f& Size, const ImGuiCond Condition) -> void
	{
		ImGui::SetNextWindowSize(ToImGui(Size), Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetNextWindowSizeConstraints(const FVector2f& SizeMin, const FVector2f& SizeMax)",
	[](const FVector2f& SizeMin, const FVector2f& SizeMax) -> void
	{
		ImGui::SetNextWindowSizeConstraints(ToImGui(SizeMin), ToImGui(SizeMax));
	});
	FAngelscriptBinds::BindGlobalFunction("void SetNextWindowContentSize(const FVector2f& Size)",
	[](const FVector2f& Size) -> void
	{
		ImGui::SetNextWindowContentSize(ToImGui(Size));
	});
	FAngelscriptBinds::BindGlobalFunction("void SetNextWindowCollapsed(bool Collapsed, EImGuiCond Condition = EImGuiCond::None)",
	[](const bool Collapsed, const ImGuiCond Condition) -> void
	{
		ImGui::SetNextWindowCollapsed(Collapsed, Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetNextWindowFocus()",
	[]() -> void
	{
		ImGui::SetNextWindowFocus();
	});
	FAngelscriptBinds::BindGlobalFunction("void SetNextWindowBgAlpha(float32 Alpha)",
	[](const float Alpha) -> void
	{
		ImGui::SetNextWindowBgAlpha(Alpha);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetWindowPosition(const FVector2f& Position, EImGuiCond Condition = EImGuiCond::None)",
	[](const FVector2f& Position, const ImGuiCond Condition) -> void
	{
		ImGui::SetWindowPos(ToImGui(Position), Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetWindowSize(const FVector2f& Size, EImGuiCond Condition = EImGuiCond::None)",
	[](const FVector2f& Size, const ImGuiCond Condition) -> void
	{
		ImGui::SetWindowSize(ToImGui(Size), Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetWindowCollapsed(bool Collapsed, EImGuiCond Condition = EImGuiCond::None)",
	[](const bool Collapsed, const ImGuiCond Condition) -> void
	{
		ImGui::SetWindowCollapsed(Collapsed, Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetWindowFocus()",
	[]() -> void
	{
		ImGui::SetWindowFocus();
	});
	FAngelscriptBinds::BindGlobalFunction("void SetWindowFontScale(float32 Scale)",
	[](const float Scale) -> void
	{
		ImGui::SetWindowFontScale(Scale);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetWindowPosition(const FString& Name, const FVector2f& Position, EImGuiCond Condition = EImGuiCond::None)",
	[](const FString& Name, const FVector2f& Position, const ImGuiCond Condition) -> void
	{
		ImGui::SetWindowPos(ToImGui(Name), ToImGui(Position), Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetWindowSize(const FString& Name, const FVector2f& Size, EImGuiCond Condition = EImGuiCond::None)",
	[](const FString& Name, const FVector2f& Size, const ImGuiCond Condition) -> void
	{
		ImGui::SetWindowSize(ToImGui(Name), ToImGui(Size), Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetWindowCollapsed(const FString& Name, bool Collapsed, EImGuiCond Condition = EImGuiCond::None)",
	[](const FString& Name, const bool Collapsed, const ImGuiCond Condition) -> void
	{
		ImGui::SetWindowCollapsed(ToImGui(Name), Collapsed, Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetWindowFocus(const FString& Name)",
	[](const char* Name) -> void
	{
		ImGui::SetWindowFocus(ToImGui(Name));
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Layout(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("void Separator()",
	[]() -> void
	{
		ImGui::Separator();
	});
	FAngelscriptBinds::BindGlobalFunction("void SameLine(float32 OffsetFromStartX = 0, float32 Spacing = -1)",
	[](const float OffsetFromStartX, const float Spacing) -> void
	{
		ImGui::SameLine(OffsetFromStartX, Spacing);
	});
	FAngelscriptBinds::BindGlobalFunction("void NewLine()",
	[]() -> void
	{
		ImGui::NewLine();
	});
	FAngelscriptBinds::BindGlobalFunction("void Spacing()",
	[]() -> void
	{
		ImGui::Spacing();
	});
	FAngelscriptBinds::BindGlobalFunction("void Dummy(const FVector2f& Size)",
	[](const FVector2f& Size) -> void
	{
		ImGui::Dummy(ToImGui(Size));
	});
	FAngelscriptBinds::BindGlobalFunction("void Indent(float32 Indent)",
	[](const float Indent) -> void
	{
		ImGui::Indent(Indent);
	});
	FAngelscriptBinds::BindGlobalFunction("void Unindent(float32 Size)",
	[](const float Indent) -> void
	{
		ImGui::Unindent(Indent);
	});
	FAngelscriptBinds::BindGlobalFunction("void BeginGroup()",
	[]() -> void
	{
		ImGui::BeginGroup();
	});
	FAngelscriptBinds::BindGlobalFunction("void EndGroup()",
	[]() -> void
	{
		ImGui::EndGroup();
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Text_Widgets(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("void TextUnformatted(const FString& Text)",
	[](const FString& Text) -> void
	{
		ImGui::TextUnformatted(ToImGui(Text));
	});
	FAngelscriptBinds::BindGlobalFunction("void Text(const FString& Text)",
	[](const FString& Text) -> void
	{
		ImGui::Text(ToImGui(Text));
	});
	FAngelscriptBinds::BindGlobalFunction("void TextColored(const FColor& Color, const FString& Text)",
	[](const FColor& Color, const FString& Text) -> void
	{
		ImGui::TextColored(ToImGui(Color), ToImGui(Text));
	});
	FAngelscriptBinds::BindGlobalFunction("void TextDisabled(const FString& Text)",
	[](const FString& Text) -> void
	{
		ImGui::TextDisabled(ToImGui(Text));
	});
	FAngelscriptBinds::BindGlobalFunction("void TextWrapped(const FString& Text)",
	[](const FString& Text) -> void
	{
		ImGui::TextWrapped(ToImGui(Text));
	});
	FAngelscriptBinds::BindGlobalFunction("void LabelText(const FString& Label, const FString& Text)",
	[](const FString& Label, const FString& Text) -> void
	{
		ImGui::LabelText(ToImGui(Label), ToImGui(Text));
	});
	FAngelscriptBinds::BindGlobalFunction("void BulletText(const FString& Text)",
	[](const FString& Text) -> void
	{
		ImGui::BulletText(ToImGui(Text));
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Main_Widgets(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool Button(const FString& Label)",
	[](const FString& Label) -> bool
	{
		return ImGui::Button(ToImGui(Label));
	});
	FAngelscriptBinds::BindGlobalFunction("bool SmallButton(const FString& Label)",
	[](const FString& Label) -> bool
	{
		return ImGui::SmallButton(ToImGui(Label));
	});
	FAngelscriptBinds::BindGlobalFunction("bool Checkbox(const FString& Label, bool& bValue)",
	[](const FString& Label, bool& bValue) -> bool
	{
		return ImGui::Checkbox(ToImGui(Label), &bValue);
	});
	FAngelscriptBinds::BindGlobalFunction("bool Bullet()",
	[]() -> void
	{
		ImGui::Bullet();
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Combo(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool BeginCombo(const FString& Label, const FString& PreviewValue, EImGuiComboFlags Flags = EImGuiComboFlags::None)",
	[](const FString& Label, const FString& PreviewValue, const ImGuiComboFlags Flags) -> bool
	{
		return ImGui::BeginCombo(ToImGui(Label), ToImGui(PreviewValue), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void EndCombo()",
	[]() -> void
	{
		ImGui::EndCombo();
	});
	FAngelscriptBinds::BindGlobalFunction("bool Combo(const FString& Label, int32& CurrentItem, const TArray<FString>& Items, int32 PopupMaxItems = -1)",
	[](const FString& Label, int32& CurrentItem, const TArray<FString>& Items, const int32 PopupMaxItems = -1) -> bool
	{
		FStringArrayToPtrHelper ItemsBuffer(Items);
		return ImGui::Combo(ToImGui(Label), &CurrentItem, ItemsBuffer.GetPtr(), Items.Num(), PopupMaxItems);
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Table(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool BeginTable(const FString& Label, const int Column, EImGuiTableFlags Flags = EImGuiTableFlags::None)",
	[](const FString& Label, const int Column, const ImGuiTableFlags Flags) -> bool
	{
		return ImGui::BeginTable(ToImGui(Label), Column, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void EndTable()",
	[]() -> void
	{
		ImGui::EndTable();
	});
	FAngelscriptBinds::BindGlobalFunction("void TableSetupColumn(const FString& Label, EImGuiTableFlags Flags = EImGuiTableFlags::None)",
	[](const FString& Label, const ImGuiTableFlags Flags) -> void
	{
		ImGui::TableSetupColumn(ToImGui(Label), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void TableNextColumn()",
	[]() -> void
	{
		ImGui::TableNextColumn();
	});
	FAngelscriptBinds::BindGlobalFunction("void TableNextRow()",
	[]() -> void
	{
		ImGui::TableNextRow();
	});
	FAngelscriptBinds::BindGlobalFunction("void TableHeadersRow()",
	[]() -> void
	{
		ImGui::TableHeadersRow();
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Slider_Widgets(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool SliderFloat(const FString& Label, float32& Value, const float32 Min, const float32 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, float& Value, const float Min, const float Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalar(ToImGui(Label), ImGuiDataType_Float, &Value, &Min, &Max, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderFloat(const FString& Label, float64& Value, const float64 Min, const float64 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, double& Value, const double Min, const double Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalar(ToImGui(Label), ImGuiDataType_Double, &Value, &Min, &Max, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderInt(const FString& Label, int64& Value, int64 Min, int64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, int64& Value, const int64 Min, const int64 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalar(ToImGui(Label), ImGuiDataType_S64, &Value, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderInt(const FString& Label, uint64& Value, int64 Min, uint64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, uint64& Value, const uint64 Min, const uint64 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalar(ToImGui(Label), ImGuiDataType_U64, &Value, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderInt(const FString& Label, int32& Value, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, int32& Value, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalar(ToImGui(Label), ImGuiDataType_S32, &Value, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderInt(const FString& Label, uint32& Value, int64 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, uint32& Value, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalar(ToImGui(Label), ImGuiDataType_U32, &Value, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderInt(const FString& Label, int16& Value, int64 Min, int16 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, int16& Value, const int16 Min, const int16 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalar(ToImGui(Label), ImGuiDataType_S16, &Value, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderInt(const FString& Label, uint16& Value, int64 Min, uint16 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, uint16& Value, const uint16 Min, const uint16 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalar(ToImGui(Label), ImGuiDataType_U16, &Value, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderInt(const FString& Label, int8& Value, int64 Min, int8 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, int8& Value, const int8 Min, const int8 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalar(ToImGui(Label), ImGuiDataType_S8, &Value, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderInt(const FString& Label, uint8& Value, int64 Min, uint8 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, uint8& Value, const uint8 Min, const uint8 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalar(ToImGui(Label), ImGuiDataType_U8, &Value, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderFloat2(const FString& Label, FVector2f& Value, float32 Min, float32 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, FVector2f& Value, const float Min, const float Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_Float, &Value, 2, &Min, &Max, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderFloat2(const FString& Label, FVector2D& Value, float64 Min, float64 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, FVector2D& Value, const double Min, const double Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 2, &Min, &Max, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool SliderFloat3(const FString& Label, FVector3f& Value, float32 Min, float32 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, FVector3f& Value, const float Min, const float Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_Float, &Value, 3, &Min, &Max, ToImGui(Format), Flags);
	});
	// FAngelscriptBinds::BindGlobalFunction("bool SliderFloat3(const FString& Label, FVector3d& Value, float64 Min, float64 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FVector3d& Value, const double Min, const double Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 3, &Min, &Max, ToImGui(Format), Flags);
	// });
	FAngelscriptBinds::BindGlobalFunction("bool SliderFloat3(const FString& Label, FVector& Value, float64 Min, float64 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, FVector& Value, const double Min, const double Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 3, &Min, &Max, ToImGui(Format), Flags);
	});
	// FAngelscriptBinds::BindGlobalFunction("bool SliderFloat4(const FString& Label, FVector4f& Value, float32 Min, float32 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FVector4f& Value, const float Min, const float Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_Float, &Value, 4, &Min, &Max, ToImGui(Format), Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderFloat4(const FString& Label, FVector4& Value, float64 Min, float64 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FVector4& Value, const double Min, const double Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 4, &Min, &Max, ToImGui(Format), Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt2(const FString& Label, FIntVector2& Value, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FIntVector2& Value, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 2, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt3(const FString& Label, FIntVector& Value, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FIntVector& Value, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 3, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt4(const FString& Label, FIntVector4& Value, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FIntVector4& Value, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 4, &Min, &Max, nullptr, Flags);
	// });
	//
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt2(const FString& Label, FInt32Vector2& Value, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt32Vector2& Value, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 2, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt3(const FString& Label, FInt32Vector& Value, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt32Vector& Value, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 3, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt4(const FString& Label, FInt32Vector4& Value, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt32Vector4& Value, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 4, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt2(const FString& Label, FUintVector2& Value, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUintVector2& Value, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 2, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt3(const FString& Label, FUintVector& Value, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUintVector& Value, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 3, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt4(const FString& Label, FUintVector4& Value, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUintVector4& Value, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 4, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt2(const FString& Label, FUint32Vector2& Value, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint32Vector2& Value, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 2, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt3(const FString& Label, FUint32Vector& Value, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint32Vector& Value, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 3, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt4(const FString& Label, FUint32Vector4& Value, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint32Vector4& Value, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 4, &Min, &Max, nullptr, Flags);
	// });
	
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt2(const FString& Label, FInt64Vector2& Value, int64 Min, int64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt64Vector2& Value, const int64 Min, const int64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_S64, &Value, 2, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt3(const FString& Label, FInt64Vector& Value, int64 Min, int64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt64Vector& Value, const int64 Min, const int64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_S64, &Value, 3, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt4(const FString& Label, FInt64Vector4& Value, int64 Min, int64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt64Vector4& Value, const int64 Min, const int64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_S64, &Value, 4, &Min, &Max, nullptr, Flags);
	// });

	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt2(const FString& Label, FUint64Vector2& Value, uint64 Min, uint64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint64Vector2& Value, const uint64 Min, const uint64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_U64, &Value, 2, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt3(const FString& Label, FUint64Vector& Value, uint64 Min, uint64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint64Vector& Value, const uint64 Min, const uint64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_U64, &Value, 3, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool SliderInt4(const FString& Label, FUint64Vector4& Value, uint64 Min, uint64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint64Vector4& Value, const uint64 Min, const uint64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::SliderScalarN(ToImGui(Label), ImGuiDataType_U64, &Value, 4, &Min, &Max, nullptr, Flags);
	// });
});

FAngelscriptBinds::FBind Bind_ImGui_Drag_Widgets(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool DragFloat(const FString& Label, float32& Value, float32 Speed, float32 Min, float32 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, float& Value, const float Speed, const float Min, const float Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalar(ToImGui(Label), ImGuiDataType_Float, &Value, Speed, &Min, &Max, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragFloat(const FString& Label, float64& Value, float32 Speed, float64 Min, float64 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, double& Value, const float Speed, const double Min, const double Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalar(ToImGui(Label), ImGuiDataType_Double, &Value, Speed, &Min, &Max, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragInt(const FString& Label, int64& Value, float32 Speed, int64 Min, int64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, int64& Value, const float Speed, const int64 Min, const int64 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalar(ToImGui(Label), ImGuiDataType_S64, &Value, Speed, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragInt(const FString& Label, uint64& Value, float32 Speed, uint64 Min, uint64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, uint64& Value, const float Speed, const uint64 Min, const uint64 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalar(ToImGui(Label), ImGuiDataType_U64, &Value, Speed, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragInt(const FString& Label, int32& Value, float32 Speed, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, int32& Value, const float Speed, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalar(ToImGui(Label), ImGuiDataType_S32, &Value, Speed, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragInt(const FString& Label, uint32& Value, float32 Speed, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, uint32& Value, const float Speed, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalar(ToImGui(Label), ImGuiDataType_U32, &Value, Speed, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragInt(const FString& Label, int16& Value, float32 Speed, int16 Min, int16 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, int16& Value, const float Speed, const int16 Min, const int16 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalar(ToImGui(Label), ImGuiDataType_S16, &Value, Speed, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragInt(const FString& Label, uint16& Value, float32 Speed, uint16 Min, uint16 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, uint16& Value, const float Speed, const uint16 Min, const uint16 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalar(ToImGui(Label), ImGuiDataType_U16, &Value, Speed, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragInt(const FString& Label, int8& Value, float32 Speed, int8 Min, int8 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, int8& Value, const float Speed, const int8 Min, const int8 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalar(ToImGui(Label), ImGuiDataType_S8, &Value, Speed, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragInt(const FString& Label, uint8& Value, float32 Speed, uint8 Min, uint8 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, uint8& Value, const float Speed, const uint8 Min, const uint8 Max, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalar(ToImGui(Label), ImGuiDataType_U8, &Value, Speed, &Min, &Max, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragFloat2(const FString& Label, FVector2f& Value, float32 Speed, float32 Min, float32 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, FVector2f& Value, const float Speed, const float Min, const float Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_Float, &Value, 2, Speed, &Min, &Max, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragFloat2(const FString& Label, FVector2D& Value, float32 Speed, float64 Min, float64 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, FVector2D& Value, const float Speed, const double Min, const double Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 2, Speed, &Min, &Max, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool DragFloat3(const FString& Label, FVector3f& Value, float32 Speed, float32 Min, float32 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, FVector3f& Value, const float Speed, const float Min, const float Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_Float, &Value, 3, Speed, &Min, &Max, ToImGui(Format), Flags);
	});
	// FAngelscriptBinds::BindGlobalFunction("bool DragFloat3(const FString& Label, FVector3d& Value, float32 Speed, float64 Min, float64 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FVector3d& Value, const float Speed, const double Min, const double Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 3, Speed, &Min, &Max, ToImGui(Format), Flags);
	// });
	FAngelscriptBinds::BindGlobalFunction("bool DragFloat3(const FString& Label, FVector& Value, float32 Speed, float64 Min, float64 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	[](const FString& Label, FVector& Value, const float Speed, const double Min, const double Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	{
		return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 3, Speed, &Min, &Max, ToImGui(Format), Flags);
	});
	// FAngelscriptBinds::BindGlobalFunction("bool DragFloat4(const FString& Label, FVector4f& Value, float32 Speed, float32 Min, float32 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FVector4f& Value, const float Speed, const float Min, const float Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_Float, &Value, 4, Speed, &Min, &Max, ToImGui(Format), Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragFloat4(const FString& Label, FVector4& Value, float32 Speed, float64 Min, float64 Max, const FString& Format = \"%.3f\", EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FVector4& Value, const float Speed, const double Min, const double Max, const FString& Format, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 4, Speed, &Min, &Max, ToImGui(Format), Flags);
	// });
	
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt2(const FString& Label, FIntVector2& Value, float32 Speed, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FIntVector2& Value, const float Speed, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 2, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt3(const FString& Label, FIntVector& Value, float32 Speed, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FIntVector& Value, const float Speed, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 3, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt4(const FString& Label, FIntVector4& Value, float32 Speed, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FIntVector4& Value, const float Speed, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 4, Speed, &Min, &Max, nullptr, Flags);
	// });

	// FAngelscriptBinds::BindGlobalFunction("bool DragInt2(const FString& Label, FInt32Vector2& Value, float32 Speed, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt32Vector2& Value, const float Speed, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 2, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt3(const FString& Label, FInt32Vector& Value, float32 Speed, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt32Vector& Value, const float Speed, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 3, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt4(const FString& Label, FInt32Vector4& Value, float32 Speed, int32 Min, int32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt32Vector4& Value, const float Speed, const int32 Min, const int32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 4, Speed, &Min, &Max, nullptr, Flags);
	// });

	// FAngelscriptBinds::BindGlobalFunction("bool DragInt2(const FString& Label, FUintVector2& Value, float32 Speed, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUintVector2& Value, const float Speed, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 2, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt3(const FString& Label, FUintVector& Value, float32 Speed, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUintVector& Value, const float Speed, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 3, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt4(const FString& Label, FUintVector4& Value, float32 Speed, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUintVector4& Value, const float Speed, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 4, Speed, &Min, &Max, nullptr, Flags);
	// });

	// FAngelscriptBinds::BindGlobalFunction("bool DragInt2(const FString& Label, FUint32Vector2& Value, float32 Speed, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint32Vector2& Value, const float Speed, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 2, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt3(const FString& Label, FUint32Vector& Value, float32 Speed, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint32Vector& Value, const float Speed, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 3, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt4(const FString& Label, FUint32Vector4& Value, float32 Speed, uint32 Min, uint32 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint32Vector4& Value, const float Speed, const uint32 Min, const uint32 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 4, Speed, &Min, &Max, nullptr, Flags);
	// });
	
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt2(const FString& Label, FInt64Vector2& Value, float32 Speed, int64 Min, int64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt64Vector2& Value, const float Speed, const int64 Min, const int64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_S64, &Value, 2, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt3(const FString& Label, FInt64Vector& Value, float32 Speed, int64 Min, int64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt64Vector& Value, const float Speed, const int64 Min, const int64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_S64, &Value, 3, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt4(const FString& Label, FInt64Vector4& Value, float32 Speed, int64 Min, int64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FInt64Vector4& Value, const float Speed, const int64 Min, const int64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_S64, &Value, 4, Speed, &Min, &Max, nullptr, Flags);
	// });

	// FAngelscriptBinds::BindGlobalFunction("bool DragInt2(const FString& Label, FUint64Vector2& Value, float32 Speed, uint64 Min, uint64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint64Vector2& Value, const float Speed, const uint64 Min, const uint64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_U64, &Value, 2, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt3(const FString& Label, FUint64Vector& Value, float32 Speed, uint64 Min, uint64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint64Vector& Value, const float Speed, const uint64 Min, const uint64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_U64, &Value, 3, Speed, &Min, &Max, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool DragInt4(const FString& Label, FUint64Vector4& Value, float32 Speed, uint64 Min, uint64 Max, EImGuiSliderFlags Flags = EImGuiSliderFlags::None)",
	// [](const FString& Label, FUint64Vector4& Value, const float Speed, const uint64 Min, const uint64 Max, const ImGuiSliderFlags Flags) -> bool
	// {
	// 	return ImGui::DragScalarN(ToImGui(Label), ImGuiDataType_U64, &Value, 4, Speed, &Min, &Max, nullptr, Flags);
	// });
});

FAngelscriptBinds::FBind Bind_ImGui_InputText(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction(
		"bool InputText(const FString& Label, FString& Buffer, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
		[](const FString& Label, FString& Buffer, ImGuiInputTextFlags Flags) -> bool
		{
			Flags &= ~(ImGuiInputTextFlags_CallbackCompletion &
				ImGuiInputTextFlags_CallbackHistory &
				ImGuiInputTextFlags_CallbackAlways &
				ImGuiInputTextFlags_CallbackCharFilter &
				ImGuiInputTextFlags_CallbackResize);

			Flags |= ImGuiInputTextFlags_CallbackEdit;

			TArray<ANSICHAR> Array;
			Array.AddDefaulted(128);
			if (!Buffer.IsEmpty())
			{
				FCStringAnsi::Strncpy(Array.GetData(), TCHAR_TO_UTF8(*Buffer), Array.Num());
			}
			return ImGui::InputText(ToImGui(Label), Array.GetData(), Array.Num(), Flags,
	[](ImGuiInputTextCallbackData* Data)
			{
				*static_cast<FString*>(Data->UserData) = FString(UTF8_TO_TCHAR(Data->Buf));
				return 0;
			}, &Buffer);
		});
});
FAngelscriptBinds::FBind Bind_ImGui_Input_Widgets(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool InputFloat(const FString& Label, float32& Value, float32 Step = 0.1, float32 StepFast = 10, const FString& Format = \"%.3f\", EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, float& Value, const float Step, const float StepFast, const FString& Format, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalar(ToImGui(Label), ImGuiDataType_Float, &Value, &Step, &StepFast, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputFloat(const FString& Label, float64& Value, float64 Step = 0.1, float64 StepFast = 10, const FString& Format = \"%.3f\", EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, double& Value, const double Step, const double StepFast, const FString& Format, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalar(ToImGui(Label), ImGuiDataType_Double, &Value, &Step, &StepFast, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputInt(const FString& Label, int64& Value, int64 Step = 1, int64 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, int64& Value, const int64 Step, const int64 StepFast, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalar(ToImGui(Label), ImGuiDataType_S64, &Value, &Step, &StepFast, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputInt(const FString& Label, uint64& Value, int64 Step = 1, uint64 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, uint64& Value, const uint64 Step, const uint64 StepFast, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalar(ToImGui(Label), ImGuiDataType_U64, &Value, &Step, &StepFast, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputInt(const FString& Label, int32& Value, int32 Step = 1, int32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, int32& Value, const int32 Step, const int32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalar(ToImGui(Label), ImGuiDataType_S32, &Value, &Step, &StepFast, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputInt(const FString& Label, uint32& Value, int64 Step = 1, uint32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, uint32& Value, const uint32 Step, const uint32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalar(ToImGui(Label), ImGuiDataType_U32, &Value, &Step, &StepFast, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputInt(const FString& Label, int16& Value, int64 Step = 1, int16 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, int16& Value, const int16 Step, const int16 StepFast, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalar(ToImGui(Label), ImGuiDataType_S16, &Value, &Step, &StepFast, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputInt(const FString& Label, uint16& Value, int64 Step = 1, uint16 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, uint16& Value, const uint16 Step, const uint16 StepFast, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalar(ToImGui(Label), ImGuiDataType_U16, &Value, &Step, &StepFast, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputInt(const FString& Label, int8& Value, int64 Step = 1, int8 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, int8& Value, const int8 Step, const int8 StepFast, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalar(ToImGui(Label), ImGuiDataType_S8, &Value, &Step, &StepFast, nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputInt(const FString& Label, uint8& Value, int64 Step = 1, uint8 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, uint8& Value, const uint8 Step, const uint8 StepFast, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalar(ToImGui(Label), ImGuiDataType_U8, &Value, &Step, &StepFast, nullptr, Flags);
	});

	FAngelscriptBinds::BindGlobalFunction("bool InputFloat2(const FString& Label, FVector2f& Value, float32 Step = 0.1, float32 StepFast = 10, const FString& Format = \"%.3f\", EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, FVector2f& Value, const float Step, const float StepFast, const FString& Format, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_Float, &Value, 2, &Step, &StepFast, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputFloat2(const FString& Label, FVector2D& Value, float64 Step = 0.1, float64 StepFast = 10, const FString& Format = \"%.3f\", EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, FVector2D& Value, const double Step, const double StepFast, const FString& Format, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 2, &Step, &StepFast, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputFloat3(const FString& Label, FVector3f& Value, float32 Step = 0.1, float32 StepFast = 10, const FString& Format = \"%.3f\", EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, FVector3f& Value, const float Step, const float StepFast, const FString& Format, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_Float, &Value, 3, &Step, &StepFast, ToImGui(Format), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool InputFloat3(const FString& Label, FVector& Value, float64 Step = 0.1, float64 StepFast = 10, const FString& Format = \"%.3f\", EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	[](const FString& Label, FVector& Value, const double Step, const double StepFast, const FString& Format, const ImGuiInputTextFlags Flags) -> bool
	{
		return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 3, &Step, &StepFast, ToImGui(Format), Flags);
	});
	// FAngelscriptBinds::BindGlobalFunction("bool InputFloat4(const FString& Label, FVector4f& Value, float32 Step = 0.1, float32 StepFast = 10, const FString& Format = \"%.3f\", EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FVector4f& Value, const float Step, const float StepFast, const FString& Format, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_Float, &Value, 4, &Step, &StepFast, ToImGui(Format), Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputFloat4(const FString& Label, FVector4d& Value, float64 Step = 0.1, float64 StepFast = 10, const FString& Format = \"%.3f\", EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FVector4d& Value, const double Step, const double StepFast, const FString& Format, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 4, &Step, &StepFast, ToImGui(Format), Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputFloat4(const FString& Label, FVector4& Value, float64 Step = 0.1, float64 StepFast = 10, const FString& Format = \"%.3f\", EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FVector4& Value, const double Step, const double StepFast, const FString& Format, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_Double, &Value, 4, &Step, &StepFast, ToImGui(Format), Flags);
	// });

	// FAngelscriptBinds::BindGlobalFunction("bool InputInt2(const FString& Label, FIntVector2& Value, int32 Step = 1, int32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FIntVector2& Value, const int32 Step, const int32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 2, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt3(const FString& Label, FIntVector& Value, int32 Step = 1, int32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FIntVector& Value, const int32 Step, const int32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 3, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt4(const FString& Label, FIntVector4& Value, int32 Step = 1, int32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FIntVector4& Value, const int32 Step, const int32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 4, &Step, &StepFast, nullptr, Flags);
	// });

	// FAngelscriptBinds::BindGlobalFunction("bool InputInt2(const FString& Label, FInt32Vector2& Value, int32 Step = 1, int32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FInt32Vector2& Value, const int32 Step, const int32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 2, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt3(const FString& Label, FInt32Vector& Value, int32 Step = 1, int32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FInt32Vector& Value, const int32 Step, const int32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 3, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt4(const FString& Label, FInt32Vector4& Value, int32 Step = 1, int32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FInt32Vector4& Value, const int32 Step, const int32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_S32, &Value, 4, &Step, &StepFast, nullptr, Flags);
	// });

	// FAngelscriptBinds::BindGlobalFunction("bool InputInt2(const FString& Label, FUintVector2& Value, uint32 Step = 1, uint32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FUintVector2& Value, const uint32 Step, const uint32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 2, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt3(const FString& Label, FUintVector& Value, uint32 Step = 1, uint32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FUintVector& Value, const uint32 Step, const uint32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 3, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt4(const FString& Label, FUintVector4& Value, uint32 Step = 1, uint32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FUintVector4& Value, const uint32 Step, const uint32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 4, &Step, &StepFast, nullptr, Flags);
	// });

	// FAngelscriptBinds::BindGlobalFunction("bool InputInt2(const FString& Label, FUint32Vector2& Value, uint32 Step = 1, uint32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FUint32Vector2& Value, const uint32 Step, const uint32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 2, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt3(const FString& Label, FUint32Vector& Value, uint32 Step = 1, uint32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FUint32Vector& Value, const uint32 Step, const uint32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 3, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt4(const FString& Label, FUint32Vector4& Value, uint32 Step = 1, uint32 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FUint32Vector4& Value, const uint32 Step, const uint32 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_U32, &Value, 4, &Step, &StepFast, nullptr, Flags);
	// });
	
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt2(const FString& Label, FInt64Vector2& Value, int64 Step = 1, int64 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FInt64Vector2& Value, const int64 Step, const int64 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_S64, &Value, 2, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt3(const FString& Label, FInt64Vector& Value, int64 Step = 1, int64 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FInt64Vector& Value, const int64 Step, const int64 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_S64, &Value, 3, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt4(const FString& Label, FInt64Vector4& Value, int64 Step = 1, int64 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FInt64Vector4& Value, const int64 Step, const int64 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_S64, &Value, 4, &Step, &StepFast, nullptr, Flags);
	// });

	// FAngelscriptBinds::BindGlobalFunction("bool InputInt2(const FString& Label, FUint64Vector2& Value, uint64 Step = 1, uint64 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FUint64Vector2& Value, const uint64 Step, const uint64 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_U64, &Value, 2, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt3(const FString& Label, FUint64Vector& Value, uint64 Step = 1, uint64 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FUint64Vector& Value, const uint64 Step, const uint64 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_U64, &Value, 3, &Step, &StepFast, nullptr, Flags);
	// });
	// FAngelscriptBinds::BindGlobalFunction("bool InputInt4(const FString& Label, FUint64Vector4& Value, uint64 Step = 1, uint64 StepFast = 100, EImGuiInputTextFlags Flags = EImGuiInputTextFlags::None)",
	// [](const FString& Label, FUint64Vector4& Value, const uint64 Step, const uint64 StepFast, const ImGuiInputTextFlags Flags) -> bool
	// {
	// 	return ImGui::InputScalarN(ToImGui(Label), ImGuiDataType_U64, &Value, 4, &Step, &StepFast, nullptr, Flags);
	// });
});

FAngelscriptBinds::FBind Bind_ImGui_Selectables(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool Selectable(const FString& Label, bool& bSelected, const FVector2f& Size = FVector2f(0, 0), EImGuiSelectableFlags Flags = EImGuiSelectableFlags::None)",
	[](const FString& Label, bool& bSelected, const FVector2f& Size, const ImGuiSelectableFlags Flags) -> bool
	{
		return ImGui::Selectable(ToImGui(Label), &bSelected, Flags, ToImGui(Size));
	});
});

FAngelscriptBinds::FBind Bind_ImGui_ListBox(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool BeginListBox(const FString& Label, const FVector2f& Size = FVector2f(0, 0))",
	[](const FString& Label, const FVector2f& Size) -> bool
	{
		return ImGui::BeginListBox(ToImGui(Label), ToImGui(Size));
	});
	FAngelscriptBinds::BindGlobalFunction("void EndListBox()",
	[]() -> void
	{
		ImGui::EndListBox();
	});
	FAngelscriptBinds::BindGlobalFunction("bool ListBox(const FString& Label, int32& CurrentItem, const TArray<FString>& Items, int32 HeightInItems = -1)",
	[](const FString& Label, int32& CurrentItem, const TArray<FString>& Items, const int32 HeightInItems = -1) -> bool
	{
		FStringArrayToPtrHelper ItemsBuffer(Items);
		return ImGui::ListBox(ToImGui(Label), &CurrentItem, ItemsBuffer.GetPtr(), Items.Num(), HeightInItems);
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Menu_Widgets(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool BeginMenuBar()",
	[]() -> bool
	{
		return ImGui::BeginMenuBar();
	});
	FAngelscriptBinds::BindGlobalFunction("void EndMenuBar()",
	[]() -> void
	{
		ImGui::EndMenuBar();
	});
	FAngelscriptBinds::BindGlobalFunction("bool BeginMainMenuBar()",
	[]() -> bool
	{
		return ImGui::BeginMainMenuBar();
	});
	FAngelscriptBinds::BindGlobalFunction("void EndMainMenuBar()",
	[]() -> void
	{
		ImGui::EndMainMenuBar();
	});
	FAngelscriptBinds::BindGlobalFunction("bool BeginMenu(const FString& Label, const bool bEnabled = true)",
	[](const FString& Label, const bool bEnabled) -> bool
	{
		return ImGui::BeginMenu(ToImGui(Label), bEnabled);
	});
	FAngelscriptBinds::BindGlobalFunction("void EndMenu()",
	[]() -> void
	{
		ImGui::EndMenu();
	});
	FAngelscriptBinds::BindGlobalFunction("bool MenuItem(const FString& Label, const FString& Shortcut = \"\", bool bSelected = false, bool bEnabled = true)",
	[](const FString& Label, const FString& Shortcut, const bool bSelected, const bool bEnabled) -> bool
	{
		const char* ImGuiShortcut = Shortcut.IsEmpty() ? nullptr : ToImGui(Shortcut);
		return ImGui::MenuItem(ToImGui(Label), ImGuiShortcut, bSelected, bEnabled);
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Tooltips(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool BeginTooltip()",
	[]() -> void
	{
		return ImGui::BeginTooltip();
	});
	FAngelscriptBinds::BindGlobalFunction("void EndTooltip()",
	[]() -> void
	{
		ImGui::EndTooltip();
	});
	FAngelscriptBinds::BindGlobalFunction("bool SetTooltip(const FString& Text)",
	[](const FString& Identifier) -> void
	{
		ImGui::SetTooltip(ToImGui(Identifier));
	});
});

FAngelscriptBinds::FBind Bind_ImGui_TreeNode(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool TreeNode(const FString& Label)",
	[](const FString& Label) -> bool
	{
		return ImGui::TreeNode(ToImGui(Label));
	});
	FAngelscriptBinds::BindGlobalFunction("bool TreeNodeEx(const FString& Label, EImGuiTreeNodeFlags Flags = EImGuiTreeNodeFlags::None)",
	[](const FString& Label, const ImGuiTreeNodeFlags Flags) -> bool
	{
		return ImGui::TreeNodeEx(ToImGui(Label), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void TreePop()",
	[]() -> void
	{
		ImGui::TreePop();
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Popups(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool BeginPopup(const FString& Identifier, EImGuiWindowFlags Flags = EImGuiWindowFlags::None)",
	[](const FString& Identifier, const ImGuiWindowFlags Flags) -> bool
	{
		return ImGui::BeginPopup(ToImGui(Identifier), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool BeginPopupModal(const FString& Name, EImGuiWindowFlags Flags = EImGuiWindowFlags::None)",
	[](const FString& Name, const ImGuiWindowFlags Flags) -> bool
	{
		return ImGui::BeginPopupModal(ToImGui(Name), nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool BeginPopupModal(const FString& Name, bool& bOpen, EImGuiWindowFlags Flags = EImGuiWindowFlags::None)",
	[](const FString& Name, bool& bOpen, const ImGuiWindowFlags Flags) -> bool
	{
		return ImGui::BeginPopupModal(ToImGui(Name), &bOpen, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void EndPopup()",
	[]() -> void
	{
		ImGui::EndPopup();
	});
	FAngelscriptBinds::BindGlobalFunction("bool OpenPopup(const FString& Identifier, EImGuiPopupFlags Flags = EImGuiPopupFlags::None)",
	[](const FString& Identifier, const ImGuiPopupFlags Flags) -> void
	{
		ImGui::OpenPopup(ToImGui(Identifier), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool OpenPopupOnItemClick(const FString& Identifier, EImGuiPopupFlags Flags = EImGuiPopupFlags::MouseButtonLeft)",
	[](const FString& Identifier, const ImGuiPopupFlags Flags) -> void
	{
		ImGui::OpenPopupOnItemClick(ToImGui(Identifier), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void CloseCurrentPopup()",
	[]() -> void
	{
		ImGui::CloseCurrentPopup();
	});
	FAngelscriptBinds::BindGlobalFunction("bool BeginPopupContextItem(const FString& Identifier, EImGuiPopupFlags Flags = EImGuiPopupFlags::MouseButtonLeft)",
	[](const FString& Identifier, const ImGuiPopupFlags Flags) -> void
	{
		ImGui::BeginPopupContextItem(ToImGui(Identifier), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool BeginPopupContextWindow(const FString& Identifier, EImGuiPopupFlags Flags = EImGuiPopupFlags::MouseButtonLeft)",
	[](const FString& Identifier, const ImGuiPopupFlags Flags) -> void
	{
		ImGui::BeginPopupContextWindow(ToImGui(Identifier), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool BeginPopupContextVoid(const FString& Identifier, EImGuiPopupFlags Flags = EImGuiPopupFlags::MouseButtonLeft)",
	[](const FString& Identifier, const ImGuiPopupFlags Flags) -> void
	{
		ImGui::BeginPopupContextVoid(ToImGui(Identifier), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool CloseCurrentPopup(const FString& Identifier, EImGuiPopupFlags Flags = EImGuiPopupFlags::None)",
	[](const FString& Identifier, ImGuiPopupFlags Flags) -> bool
	{
		return ImGui::IsPopupOpen(ToImGui(Identifier), Flags);
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Tabs(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool BeginTabBar(const FString& Identifier, EImGuiTabBarFlags Flags = EImGuiTabBarFlags::None)",
	[](const FString& Identifier, const ImGuiTabBarFlags Flags) -> bool
	{
		return ImGui::BeginTabBar(ToImGui(Identifier), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void EndTabBar()",
	[]() -> void
	{
		ImGui::EndTabBar();
	});
	FAngelscriptBinds::BindGlobalFunction("bool BeginTabItem(const FString& Label, EImGuiTabItemFlags Flags = EImGuiTabItemFlags::None)",
	[](const FString& Label, const ImGuiTabItemFlags Flags) -> bool
	{
		return ImGui::BeginTabItem(ToImGui(Label), nullptr, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool BeginTabItem(const FString& Label, bool& bOpen, EImGuiTabItemFlags Flags = EImGuiTabItemFlags::None)",
	[](const FString& Label, bool& bOpen, const ImGuiTabItemFlags Flags) -> bool
	{
		return ImGui::BeginTabItem(ToImGui(Label), &bOpen, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void EndTabItem()",
	[]() -> void
	{
		ImGui::EndTabItem();
	});
	FAngelscriptBinds::BindGlobalFunction("bool TabItemButton(const FString& Label, EImGuiTabItemFlags Flags = EImGuiTabItemFlags::None)",
	[](const FString& Label, const ImGuiTabItemFlags Flags) -> bool
	{
		return ImGui::TabItemButton(ToImGui(Label), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetTabItemClosed(const FString& Label)",
	[](const FString& Label) -> void
	{
		ImGui::SetTabItemClosed(ToImGui(Label));
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Disabled(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("void BeginDisabled(bool bDisabled = true)",
	[](const bool bDisabled) -> void
	{
		ImGui::BeginDisabled(bDisabled);
	});
	FAngelscriptBinds::BindGlobalFunction("void EndDisabled()",
	[]() -> void
	{
		ImGui::EndDisabled();
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Widget_Utilities(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool IsItemHovered(EImGuiHoveredFlags Flags = EImGuiHoveredFlags::None)",
	[](const ImGuiHoveredFlags Flags) -> bool {
	    return ImGui::IsItemHovered(Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsItemActive()",
	[]() -> bool {
	    return ImGui::IsItemActive();
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsItemFocused()",
	[]() -> bool {
	    return ImGui::IsItemFocused();
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsItemClicked(EImGuiMouseButton MouseButton = EImGuiMouseButton::Left)",
	[](const ImGuiMouseButton MouseButton) -> bool {
	    return ImGui::IsItemClicked(MouseButton);
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsItemVisible()",
	[]() -> bool {
	    return ImGui::IsItemVisible();
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsItemEdited()",
	[]() -> bool {
	    return ImGui::IsItemEdited();
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsItemActivated()",
	[]() -> bool {
	    return ImGui::IsItemActivated();
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsItemDeactivated()",
	[]() -> bool {
	    return ImGui::IsItemDeactivated();
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsItemDeactivatedAfterEdit()",
	[]() -> bool {
	    return ImGui::IsItemDeactivatedAfterEdit();
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsItemToggledOpen()",
	[]() -> bool {
	    return ImGui::IsItemToggledOpen();
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsAnyItemHovered()",
	[]() -> bool {
	    return ImGui::IsAnyItemHovered();
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsAnyItemActive()",
	[]() -> bool {
	    return ImGui::IsAnyItemActive();
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsAnyItemFocused()",
	[]() -> bool {
	    return ImGui::IsAnyItemFocused();
	});
	FAngelscriptBinds::BindGlobalFunction("FVector2f GetItemRectMin()",
	[]() -> FVector2f {
	    return ToUnreal(ImGui::GetItemRectMin());
	});
	FAngelscriptBinds::BindGlobalFunction("FVector2f GetItemRectMax()",
	[]() -> FVector2f {
	    return ToUnreal(ImGui::GetItemRectMax());
	});
	FAngelscriptBinds::BindGlobalFunction("FVector2f GetItemRectSize()",
	[]() -> FVector2f {
	    return ToUnreal(ImGui::GetItemRectSize());
	});
	FAngelscriptBinds::BindGlobalFunction("void SetItemAllowOverlap()",
	[]() -> void {
	    ImGui::SetItemAllowOverlap();
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Widget_InputUtilitiesKeyboard(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool IsKeyDown(EImGuiKey Key)",
	[](const ImGuiKey Key) -> bool {
		return ImGui::IsKeyDown(Key);
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsKeyPressed(EImGuiKey Key, bool bRepeat)",
	[](const ImGuiKey Key, const bool bRepeat) -> bool {
		return ImGui::IsKeyPressed(Key, bRepeat);
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsKeyReleased(EImGuiKey Key)",
	[](const ImGuiKey Key) -> bool {
		return ImGui::IsKeyReleased(Key);
	});
	FAngelscriptBinds::BindGlobalFunction("int32 GetKeyPressedAmount(EImGuiKey Key, float32 RepeatDelay, float32 Rate)",
	[](const ImGuiKey Key, const float RepeatDelay, const float Rate) -> int32 {
		return ImGui::GetKeyPressedAmount(Key, RepeatDelay, Rate);
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Style(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("void PushStyleColor(EImGuiCol Idx, const FColor& Color)",
	[](const ImGuiCol Idx, const FColor Color) {
			ImGui::PushStyleColor(Idx, ToImGui(Color));
	});
	FAngelscriptBinds::BindGlobalFunction("void PopStyleColor(int32 Count = 1)",
	[](const int32 Count) {
		ImGui::PopStyleColor(Count);
	});
	FAngelscriptBinds::BindGlobalFunction("void PushStyleVar(EImGuiStyleVar idx, float32 val)",
[](ImGuiStyleVar Idx, float Val) {
		ImGui::PushStyleVar(Idx, Val);
	});
	FAngelscriptBinds::BindGlobalFunction("void PushStyleVar(EImGuiStyleVar idx, const FVector2f& val)",
		[](ImGuiStyleVar Idx, const FVector2f& Val) {
			ImGui::PushStyleVar(Idx, ToImGui(Val));
		});
	FAngelscriptBinds::BindGlobalFunction("void PopStyleVar(int32 Count = 1)",
	[](const int32 Count) {
		ImGui::PopStyleVar(Count);
	});
});

FAngelscriptBinds::FBind Bind_ImGui_Widget_InputUtilitiesMouse(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImGui");
	FAngelscriptBinds::BindGlobalFunction("bool IsMouseDown(EImGuiMouseButton Button)",
	[](const ImGuiMouseButton Button) -> bool {
		return ImGui::IsMouseDown(Button);
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsMouseClicked(EImGuiMouseButton Button, bool bRepeat)",
	[](const ImGuiMouseButton Button, const bool bRepeat) -> bool {
		return ImGui::IsMouseClicked(Button, bRepeat);
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsMouseReleased(EImGuiMouseButton Button)",
	[](const ImGuiMouseButton Button) -> bool {
		return ImGui::IsMouseReleased(Button);
	});
	FAngelscriptBinds::BindGlobalFunction("int32 GetMouseClickedCount(EImGuiMouseButton Button)",
	[](const ImGuiKey Key) -> int32 {
		return ImGui::GetMouseClickedCount(Key);
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsMouseHoveringRect(const FVector2f& RectMin, const FVector2f& RectMax, bool bClip = true)",
	[](const FVector2f& RectMin, const FVector2f& RectMax, const bool bClip) -> bool {
		return ImGui::IsMouseHoveringRect(ToImGui(RectMin), ToImGui(RectMax), bClip);
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsMousePosValid()",
	[]() -> bool {
		return ImGui::IsMousePosValid(nullptr);
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsMousePosValid(const FVector2f& Position)",
	[](const FVector2f& Position) -> bool {
		const ImVec2 ImGuiPosition = ToImGui(Position);
		return ImGui::IsMousePosValid(&ImGuiPosition);
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsAnyMouseDown()",
	[]() -> bool {
		return ImGui::IsAnyMouseDown();
	});
	FAngelscriptBinds::BindGlobalFunction("FVector2f GetMousePos()",
	[]() -> FVector2f {
		return ToUnreal(ImGui::GetMousePos());
	});
	FAngelscriptBinds::BindGlobalFunction("FVector2f GetMousePosOnOpeningCurrentPopup()",
	[]() -> FVector2f {
		return ToUnreal(ImGui::GetMousePosOnOpeningCurrentPopup());
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsMouseDragging(EImGuiMouseButton Button, float32 LockThreshold = -1.0)",
	[](const ImGuiKey Key, const float LockThreshold) -> bool {
		return ImGui::IsMouseDragging(Key, LockThreshold);
	});
	FAngelscriptBinds::BindGlobalFunction("FVector2f GetMouseDragDelta(EImGuiMouseButton Button, float32 LockThreshold = -1.0)",
	[](const ImGuiKey Key, const float LockThreshold) -> FVector2f {
		return ToUnreal(ImGui::GetMouseDragDelta(Key, LockThreshold));
	});
	FAngelscriptBinds::BindGlobalFunction("void ResetMouseDragDelta(EImGuiMouseButton Button)",
	[](const ImGuiMouseButton Button) -> void {
		ImGui::ResetMouseDragDelta(Button);
	});
	FAngelscriptBinds::BindGlobalFunction("EImGuiMouseCursor ResetMouseDragDelta()",
	[]() -> ImGuiMouseCursor {
		return ImGui::GetMouseCursor();
	});
	FAngelscriptBinds::BindGlobalFunction("void SetMouseCursor(EImGuiMouseCursor Cursor)",
	[](const ImGuiMouseCursor Cursor) -> void {
		ImGui::SetMouseCursor(Cursor);
	});
	FAngelscriptBinds::BindGlobalFunction("bool IsKeyboardCaptured()",
	[]() -> bool {
		return ImGui::GetIO().WantCaptureKeyboard;
	});
});
